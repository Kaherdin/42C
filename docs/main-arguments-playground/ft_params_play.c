/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params_play.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 00:49:26 by aborst            #+#    #+#             */
/*   Updated: 2021/09/10 01:15:04 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
	int	i;

	i = 1;
	printf("%s", argv[1]);
	//printf("%d", multiply(argv[1], argv[2]));
	while (i < argc)
	{
		//ft_putstr(argv[i]);
		//ft_putchar('\n');
		i++;
	}
	return (0);
}
