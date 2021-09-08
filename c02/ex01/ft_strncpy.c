/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/08 20:51:24 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	dest[] = "Source";
	char	src[] = "Destination";

	printf("src: %s old dest: %s\n", src, dest);
	ft_strncpy(dest, src, 3);
	printf("src: %s new dest: %s\n", src, dest);
	return (0);
} 

 */