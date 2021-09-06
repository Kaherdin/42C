/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:37:24 by aborst            #+#    #+#             */
/*   Updated: 2021/09/06 19:51:58 by aborst           ###   ########.fr       */
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

/* int	main(void)
{
	int	*pb;
	int	*pa;

	pa = 13;
	pb = 23;
	printf("a = %d\n", pa);
	printf("b = %d\n", pb);
	ft_swap(&pa, &pb);
	printf("aSwap = %d\n", pa);
	printf("bSwap = %d\n", pb);
} */