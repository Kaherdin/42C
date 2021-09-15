/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/15 21:45:38 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (size < i)
	{
		while (src[j])
			j++;
		return (size + j);
	}
	while (size > 0 && i < size - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}

int	main(void)
{
	char	test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	char	test2[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	

	printf("%d-", ft_strlcat(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 6));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcat(test, "asdf", 0));
	printf("%s\n", test);

	printf("--------------\n");

	printf("%ld-", strlcat(test2, "asdf", (size_t)16));
	printf("%s\n", test2);
	printf("%ld-", strlcat(test2, "asdf", (size_t)6));
	printf("%s\n", test2);
	printf("%ld-", strlcat(test2, "asdf", (size_t)4));
	printf("%s\n", test2);
	printf("%ld-", strlcat(test2, "", (size_t)16));
	printf("%s\n", test2);
	printf("%ld-", strlcat(test2, "asdf", (size_t)0));
	printf("%s\n", test2); 
} 
