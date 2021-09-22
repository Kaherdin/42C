/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 02:40:39 by aborst            #+#    #+#             */
/*   Updated: 2021/09/19 03:23:56 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_first_word(char *str)
{
	int i;

	i = 0;
	//To do : Is whitespace from atoi...
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

//int	main(int argc, char **argv)
int main(void)
{
	ft_first_word("		tesst asdsadas");
}
