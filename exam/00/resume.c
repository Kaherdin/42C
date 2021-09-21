/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resume.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 01:48:05 by aborst            #+#    #+#             */
/*   Updated: 2021/09/21 21:19:51 by aborst           ###   ########.fr       */
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

int	ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\n' || c == '\v' || c == '\t'
		|| c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
}

int		ft_is_prime(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
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
	ft_putchar('\n');
	ft_putnbr(-1205);
}
