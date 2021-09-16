/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 21:38:00 by aborst            #+#    #+#             */
/*   Updated: 2021/09/16 19:18:19 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negativ;
	int	nb;

	i = 0;
	negativ = 1;
	nb = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
		while (str[i] == 45)
		{
			negativ *= -1;
			i++;
		}
		while (str[i] == 43)
		{
			i++;
		}
		while (str[i] >= 48 && str[i] <= 57)
		{
			nb *= 10;
			nb += ((int)str[i] - 48);
			i++;
		}
		i++;
	}
	

	if (negativ == -1)
		return (-nb);
	else
		return (nb);
	
}

/* int	main(void)
{
 	printf("%d,%d,%d\n", ft_atoi("15"), ft_atoi("0"), ft_atoi("---25"));
	printf("%d,%d\n", ft_atoi("2147483647"), ft_atoi("-2147483648"));   
	printf("%d\n", ft_atoi("   ----+--+1234ab567"));
} */
