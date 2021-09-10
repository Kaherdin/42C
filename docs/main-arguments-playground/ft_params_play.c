/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params_play.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 00:49:26 by aborst            #+#    #+#             */
/*   Updated: 2021/09/10 02:33:44 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	multiply(int a, int b)
{
	return (a * b);
}

//int	main(void)
int	main(int argc, char **argv)
{	
	int	n;
	int	n2;

	(void) argc;
	n = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d", multiply(n, n2));
	return (0);
}
