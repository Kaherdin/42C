/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/08 20:44:57 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}		
		i++;
	}
	return (str);
}

/* int	main(void)
{	
	char	str1[] = "AbCdEfGhI"; //WORKINGå
	//char	*str1 = "AbCdEfGhI"; //NOT WORKING

	//char	str1; //NOT WORKING
	//str1 = "AbCdEfGhI"; //NOT WORKING

	//char	*str1; //NOT WORKINGˇ
	//str1[] = "AbCdEfGhI"; //NOT WORKING
	printf("Lowercase : %s\n", str1);
	ft_strlowcase(str1);
	printf("Uppercase : %s\n", str1); 
}
 */