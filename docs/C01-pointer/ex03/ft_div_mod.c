/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:37:24 by aborst            #+#    #+#             */
/*   Updated: 2021/09/06 20:33:27 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	b;
	int	a;
	int	div;
	int	mod;

	a = 50;
	b = 7;
	printf("div = %d\n", div);
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
} */

int	main(void)
{
	int	b;
	int	a;
	int	*div;
	int	*mod;

	a = 50;
	b = 7;
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
}
