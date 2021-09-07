/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/07 18:55:37 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/* int	main(void)
{
	char	*dest;
	char	*src;

	dest = "Tu vas rater";
	src = "Tu vas réussir !";
	printf("String 1 = %s\n", dest);
	printf("String 2 = %s\n", src);
	ft_strcpy(&dest, &src);
	printf("String 1 is now = %s\n", dest);
	return (0);
}
 */