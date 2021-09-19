/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 01:48:05 by aborst            #+#    #+#             */
/*   Updated: 2021/09/19 02:30:03 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_a(char *str)
{
	while (*str != 0)
	{
		if (*str == 'a')
		{
			ft_putchar(*str);
		}
		str++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_check_a(argv[1]);
	}
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
}
