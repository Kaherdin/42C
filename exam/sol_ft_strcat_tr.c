/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sol*_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/20 17:53:24 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*final;

	final = dest;
	while (*dest != '\0')
	{
		dest++;
	}	
	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (final);
}

int	main(void)
{
	char src[10]	= "fghijklm";
	char dest[10]	= "abcde";
	printf("Str: %s", ft_strcat(dest, src));
	return (0);
} 
