/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/16 18:03:52 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

/* int	main(void)
{
	int res, exp;

	res = ft_iterative_power(2, 2), exp = 4;
	printf("2^2 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 1), exp = 2;
	printf("2^1 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 0), exp = 1;
	printf("2^0 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, -1), exp = 0;
	printf("2^-1 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(2, 4), exp = 16;
	printf("2^4 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(5, 3), exp = 125;
	printf("5^3 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_iterative_power(3, 5), exp = 243;
	printf("3^5 (%d vs %d) -> %d\n", res, exp, res == exp);
}   */
