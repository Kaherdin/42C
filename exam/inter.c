/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:07:53 by aborst            #+#    #+#             */
/*   Updated: 2021/09/17 15:07:20 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *str, char c, int size)
{	
	int	i;

	i = 0;
	while (i < size)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		if (ft_check(s1, s1[i], i) == 1)
		{
			j = 0;
			while (s2[j])
			{
				if (s2[j] == s1[i])
				{
					ft_putchar(s1[i]);
					break ;
				}
				++j;
			}
		}			
		++i;
	}
/* 	while (str2[s2_i])
	{
		if (ft_check_double(str1, str2[s2_i], s1_i) == 1)
		{
			if (ft_check_double(str2, str2[s2_i], s2_i) == 1)
				ft_putchar(str2[s2_i]);
		}		
		s2_i++;
	} */
}

int	main(void)
{
	ft_inter("padinton", "paqefwtdjetyiytjneytjoeyjnejeyj");
}
