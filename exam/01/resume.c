/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resume.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 01:48:05 by aborst            #+#    #+#             */
/*   Updated: 2021/09/19 02:31:19 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//Idem ft_putstr_array(char str[])
void	ft_putstr_ptr(char *str)
{
	while (*str != '\0') // idem while (*str) le != '\0' est induit
	{
		ft_putchar(*str);
		str++;
	}
}

//Idem ft_putstr_ptr(char *str) 
void	ft_putstr_array(char str[])
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char str[])
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	main(int argc, char **argv)
{
	if (argc == 2) //N afficher la fonction que s'il y a un seul argument (le 1er est pris par celui du programme)
	{
		ft_putstr_ptr(argv[1]);
		ft_putchar('\n');
		ft_putstr_array(argv[1]);
		ft_putchar('\n');
		printf("String length : %d\n", ft_strlen(argv[1])); //Utiliser la fonction interdite pour debugger :)
	}
	else
	{
		ft_putchar('a');
	}
}
