/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/14 23:35:45 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	first_letter;

	i = 0;
	first_letter = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (first_letter && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!first_letter && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			first_letter = 0;
		}
		else
			first_letter = 1;
		i++;
	}
	return (str);
}

/* int	main(void)
{	
	char	str1[255] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[255] = "-)-Rc=q/Q9x=h?l}&}+&Rx@#.#C^:[m$";

	printf("Normal : %s\n", str1);
	ft_strcapitalize(str1);
	printf("Capitalize : %s\n", str1);  
	//expected Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un

	printf("Normal : %s\n", str2);
	ft_strcapitalize(str2);
	printf("Capitalize : %s\n", str2); 
	//expected )-Rc=Q/Q9x=H?L}&}+&Rx@#.#C^:[M$
} */
 