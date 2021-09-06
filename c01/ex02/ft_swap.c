/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:37:24 by aborst            #+#    #+#             */
/*   Updated: 2021/09/06 19:35:09 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;
}

/*
int	main(void)
{
	int	a;
	int	b;
	int	*pb;
	int	*pa;

	a = 13;
	b = 23;
	pa = &a;
	pb = &b;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(pa, pb);
	printf("aSwap = %d\n", a);
	printf("bSwap = %d\n", b);
}
*/