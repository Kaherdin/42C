/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/16 18:19:34 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	racine;
	int	multi;

	racine = 1;
	multi = 0;
	if (nb == 1)
		return (nb);
	while (racine <= nb / 2)
	{
		multi = racine * racine;
		if (multi == nb)
		{
			return (racine);
		}
		racine++;
	}
	return (0);
}

/* int	main(void)
{
	int res, exp;

	res = ft_sqrt(1), exp = 1;
	printf("root 1 (%d vs %d) -> %d\n", res, exp, res == exp);
 	res = ft_sqrt(4), exp = 2;
	printf("root 4 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(0), exp = 0;
	printf("root 0 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(3), exp = 0;
	printf("root 3 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(7), exp = 0;
	printf("root 7 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(16), exp = 4;
	printf("root 16 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(-5), exp = 0;
	printf("root -5 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(144), exp = 12;
	printf("root 144 (%d vs %d) -> %d\n", res, exp, res == exp); 

} */