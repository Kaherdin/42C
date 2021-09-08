/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/08 03:03:56 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* int	cond_check_lowercase(char c)
{
	if ((c >= 'a' && c <= 'z'))
		c -= 32;
	else
		return (0);
} */

char	*ft_strupcase(char *str)
{
	int	i;

/* 	for (i = 0; str[i] != '\0'; i++) 
	{
		if ((str[i] >= 'a') && (str[i] <= 'z')) {
			printf("minu %c\n", str[i]); //ok
			str[i] -= 32;
			printf("maju %c\n", str[i]); //ok
		}
	} */

	i = 0;
	while (str[i])
	{
		printf("maju %c\n", str[i]);
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			printf("maju %c\n", str[i] - 32);
			str[i] = str[i] - 32;
		} 
		
		
		i++;
	}
	return (str);
	//return (1);
	//return (str);
}

int	main(void)
{	
	char	str1[] = "AuReLieN"; 
/*  	char	str1[12];
	*str1 = "Aurelien"; */

	//printf("String 1 = %s\n", dest);
	

	printf("%s\n", str1); //ok
	ft_strupcase(str1);
	printf("%s\n", str1); //ok
	//return (0);
}
