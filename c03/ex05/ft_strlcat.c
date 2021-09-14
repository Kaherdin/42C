/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/14 17:40:18 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	k;
	unsigned int	i;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	k = 0;
	while (src[k])
		k++;
	return (k + size);
}

/* int	main(void)
{
	char	test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
	
	printf("%d-", strlcat(test, "asdf", 16));
	printf("%s\n", test);
	printf("%d-", strlcat(test, "asdf", 6));
	printf("%s\n", test);
	printf("%d-", strlcat(test, "asdf", 4));
	printf("%s\n", test);
	printf("%d-", strlcat(test, "", 16));
	printf("%s\n", test);
	printf("%d-", strlcat(test, "asdf", 0));
	printf("%s\n", test); 

	printf("\n");

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
}  */
