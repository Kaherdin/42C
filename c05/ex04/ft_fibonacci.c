/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/16 22:16:53 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 1)
		return (0);
	else if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* int	main(void)
{
	//https://fr.wikipedia.org/wiki/Suite_de_Fibonacci
	printf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
	ft_fibonacci(-1477), //-1
	ft_fibonacci(0), //0
	ft_fibonacci(1), //1
	ft_fibonacci(2), //1
	ft_fibonacci(3), //2
	ft_fibonacci(4), //3
	ft_fibonacci(5), //5
	ft_fibonacci(6), //8
	ft_fibonacci(7), //13
	ft_fibonacci(8), //21
	ft_fibonacci(9), //34
	ft_fibonacci(10), //55
	ft_fibonacci(11)); //89
} */
