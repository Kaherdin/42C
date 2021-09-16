/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/16 17:30:29 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}	
	i = nb;
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}

/* int	main(void)
{
	int	result, expected;

	result = ft_iterative_factorial(13), expected = 1932053504;
	printf("13! (%d vs %d) -> %d\n", result, expected, result == expected);

 	result = ft_iterative_factorial(4), expected = 24; //4*3*2*1 = 24
	printf("4! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_iterative_factorial(0), expected = 1;
	printf("0! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_iterative_factorial(1), expected = 1;
	printf("1! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_iterative_factorial(10), expected = 3628800;
	printf("10! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_iterative_factorial(12), expected = 479001600;
	printf("12! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_iterative_factorial(13), expected = 1932053504;
	printf("13! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_iterative_factorial(-2), expected = 0;
	printf("-2! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_iterative_factorial(1000), expected = 0;
	printf("1000! (%d vs %d) -> %d\n", result, expected, result == expected);
} */
