/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:48:47 by aborst            #+#    #+#             */
/*   Updated: 2021/09/20 11:48:47 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	ft_atoi(const char *str)
{
	int	result;
	int	minus;

	minus = 1;
	while (ft_is_whitespace(*str) == 1)
	{
		str++;
	}		
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	result = 0;
	while (ft_is_number(*str) == 1)
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (result * minus);
}

/* int	main(void)
{
  	printf("%d,%d,%d\n", ft_atoi("15"), ft_atoi("0"), ft_atoi("---25"));
	printf("%d,%d\n", ft_atoi("2147483647"), ft_atoi("-2147483648")); 
	printf("%d\n", ft_atoi("   ----+--+1234ab567"));
} */
