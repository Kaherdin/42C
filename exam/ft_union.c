/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 01:27:56 by aborst            #+#    #+#             */
/*   Updated: 2021/09/17 02:30:28 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_verif_char(char *str, char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int	i_s1;
	int	i_s2;

	i_s1 = 0;
	i_s2 = 0;
	while (s1[i_s1])
	{
		if (ft_verif_char(s1, s1[i_s1], i_s1) == 1)
			ft_putchar(s1[i_s1]);
		i_s1++;
	}
	while (s2[i_s2])
	{
		if (ft_verif_char(s2, s2[i_s2], i_s2) == 1)
		{
			if (ft_verif_char(s1, s2[i_s2], i_s1) == 1)
				ft_putchar(s2[i_s2]);
		}			
		i_s2++;
	}
}

int	main(void)
{
	ft_union("rien", "cette phrase ne cache rien");
}
