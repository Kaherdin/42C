/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/09 23:05:13 by aborst           ###   ########.fr       */
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
	int	result;

	result = ft_iterative_factorial(5); // 5*4*3*2*1 = 120
	printf("%d", result);
} */