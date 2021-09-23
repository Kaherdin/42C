/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 20:39:28 by aborst            #+#    #+#             */
/*   Updated: 2021/09/23 20:53:36 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_whitespace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
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

int ft_atoi(char *s)
{
    int i;
    int neg;
    int result;
    i = 0;
    neg = 1;

    while (ft_is_whitespace(s[i]) == 1)
        i++;
    while (s[i] == '+' || s[i] == '-')
    {
        if (s[i] == '-')
            neg *= -1;
        i++;
    }
    result = 0;
    while (ft_is_number(s[i]) == 1)
    {
        result *= 10;
        result += s[i] - '0';
        i++;
    }
    return (result * neg);
}


int	main(void)
{
  	printf("%d,%d,%d\n", ft_atoi("15"), ft_atoi("0"), ft_atoi("---25"));
	printf("%d,%d\n", ft_atoi("2147483647"), ft_atoi("-2147483648")); 
	printf("%d\n", ft_atoi("   ----+--+1234ab567"));
}