/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/09 01:31:40 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}		
	i2 = 0;
	while (src[i2] != '\0')
	{
		dest[i + i2] = src[i2];
		i2++;
	}
	dest[i + i2] = '\0';
	return (dest);
}

int	main(void)
{
	/* char	s1[10] 	= "a";
	char	s2[44] 	= "bcd";
	printf("Result: %c\n", ft_strcat(s1, s2));
	return (0); */

	char src1[10]	= "abc";
	char dest1[10]   = "defghijk";

	char src[10]	= "abc";
	char dest[10]	= "defghijk";
	//ft_strcat(dest, src);
	//strcat(src, dest);
	printf("Str: %s \n", strcat(dest1, src1));
	printf("Str: %s", ft_strcat(dest, src));
	return (0);
} 
