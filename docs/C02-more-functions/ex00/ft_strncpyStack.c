/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpyStack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/07 20:40:24 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    unsigned int size;

    i = 0;
    size = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

/* int main()
{
     char str[] = "test de chaine";
     char *str2 = "abc";

     ft_strncpy(str, str2, 3);
     printf("%s\n", str);
     return 0;
} */

/* int main()
{
     char *str = "test de chaine";
     char *str2 = "abc";

     ft_strncpy(&str, &str2, 10);
     printf("%s\n", str);
     return 0;
} */

/* int	main(void)
{
	char			*dest;
	char			*src;
	unsigned int	n;

	n = 12;
	dest = "Tu vas rater";
	src = "as";
	printf("String 1 = %s\n", dest);
	printf("String 2 = %s\n", src);
	ft_strncpy(&dest, &src, n);
	printf("String 1 is now = %s\n", dest);
	return (0);
} */