/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/16 18:02:47 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
}

/* int	main(void)
{
	int	result, expected;

	result = ft_recursive_factorial(13), expected = 1932053504;
	printf("13! (%d vs %d) -> %d\n", result, expected, result == expected);

 	result = ft_recursive_factorial(4), expected = 24; //4*3*2*1 = 24
	printf("4! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_recursive_factorial(0), expected = 1;
	printf("0! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_recursive_factorial(1), expected = 1;
	printf("1! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_recursive_factorial(10), expected = 3628800;
	printf("10! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_recursive_factorial(12), expected = 479001600;
	printf("12! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_recursive_factorial(13), expected = 1932053504;
	printf("13! (%d vs %d) -> %d\n", result, expected, result == expected);
	result = ft_recursive_factorial(-2), expected = 0;
	printf("-2! (%d vs %d) -> %d\n", result, expected, result == expected);
} */