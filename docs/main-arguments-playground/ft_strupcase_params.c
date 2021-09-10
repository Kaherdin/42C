/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/10 01:17:23 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/* 
int	main(void)
{	
	char	str1[] = "AuReLieN";
	printf("Minuscle : %s\n", str1);
	ft_strupcase(str1);
	printf("Majuscule : %s\n", str1); 
} */

//int	main(void)
int	main(int argc, char **argv)
{
	int	i;

	i = 1;

	//char	str1[] = "AuReLieN";
	printf("Minuscle : %s\n", argv[1]);
	ft_strupcase(argv[1]);
	printf("Majuscule : %s\n", argv[1]); 

	//printf("%s", argv[1]);
	
	//printf("%d", multiply(argv[1], argv[2]));
	while (i < argc)
	{
		//ft_putstr(argv[i]);
		//ft_putchar('\n');
		i++;
	}
	return (0);
}
