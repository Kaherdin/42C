/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/14 03:14:29 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < size - 1)
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int	main(void)
{
	char src1[10]	= "ab121";
	char dest1[10]   = "12123123";

	char src[10]	= "ab121";
	char dest[10]	= "12123123";

	size_t 			nb = 8;
	unsigned int 	nb2 = 8;
	//strcat(src, dest);
	printf("Str: %ld \n", strlcpy(dest1, src1, nb));
	printf("Str: %u", ft_strlcpy(dest, src, nb2));
	return (0);
}