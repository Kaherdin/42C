/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 02:40:39 by aborst            #+#    #+#             */
/*   Updated: 2021/09/19 03:40:36 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *str, char ca, char cb)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ca)
			ft_putchar(cb);
		else
			ft_putchar(str[i]);
		i++;
	}	
}

//int	main(int argc, char **argv)
int	main(void)
{
	char	ca;
	char	cb;

	ca = 'd';
	cb = 'b';
	search_and_replace("dadar", ca, cb);
}
