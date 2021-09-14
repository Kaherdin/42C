/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/14 16:13:21 by aborst           ###   ########.fr       */
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
 	//char	src1[256]	= "abcdefghi";
	//char	dest1[50]   = "asdasd";
	//unsigned int 	nb2 = 8;

	//char	src[50]	= "ab121";
	//char	dest[50]	= "12123123"; 
	//size_t 			nb = 8;

	//printf("Original strlcpy : %ld \n", strlcpy(dest1, src1, nb2));
	//printf("Copy ft_strlcpy: %u", ft_strlcpy(dest1, src1, nb2));

	char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	printf("%d-", ft_strlcpy(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "uiop", 0));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "qwerty", 4));
	printf("%s\n", test);
	printf("%d-", ft_strlcpy(test, "", 4));
	printf("%s\n", test);

	printf("----------- \n");

 	printf("%d-", strlcpy(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", strlcpy(test, "uiop", 0));
	printf("%s\n", test);
	printf("%d-", strlcpy(test, "qwerty", 4));
	printf("%s\n", test);
	printf("%d-", strlcpy(test, "", 4));
	printf("%s\n", test);
	return (0);
}