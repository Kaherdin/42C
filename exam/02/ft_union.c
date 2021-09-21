/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 01:27:56 by aborst            #+#    #+#             */
/*   Updated: 2021/09/21 21:43:53 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
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
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		if (ft_verif_char(s1, s1[i], i) == 1)
			ft_putchar(s1[i]);
		i++;
	}
	j = 0;
	while (s2[j])
	{
		if (ft_verif_char(s2, s2[j], j) == 1)
		{
			if (ft_verif_char(s1, s2[j], i) == 1)
				ft_putchar(s2[j]);
		}			
		j++;
	}
}

int	main(void)
{
	ft_union("zpadinton", "paqefwtdjetyiytjneytjoeyjnejeyj");
	ft_putchar('\n');
	ft_union("ddf6vewg64f", "gtwthgdwthdwfteewhrtag6h4ffdhsd");
	ft_putchar('\n');
	ft_union("rien", "cette phrase ne cache rien");
	ft_putchar('\n');
}
