/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/17 01:18:37 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

/* int	ft_sqrt(int nb)
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
		racine = racine + 2;
	}
	return (0);
} */

int	ft_sqrt(int nb)
{
	unsigned int	racine;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (nb);
	racine = 0;
	while ((racine * racine) < (unsigned int)nb)
	{
		racine++;
	}
	if ((racine * racine) == (unsigned int)nb)
	{
		return (racine);
	}
	else
	{
		return (0);
	}
}

/*  int	main(void)
{

	printf("sqrt of %d is %d\n", 49, ft_sqrt(49));
	int	res, exp;

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

	printf("sqrt of %d is %d\n", -125, ft_sqrt(-125));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 917362944, ft_sqrt(917362944));
	printf("sqrt of %d is %d\n", 1926881480, ft_sqrt(1926881480));
	printf("sqrt of %d is %d\n", 464919844, ft_sqrt(464919844));
	printf("sqrt of %d is %d\n", 274208610, ft_sqrt(274208610));
	printf("sqrt of %d is %d\n", 115820644, ft_sqrt(115820644));
	printf("sqrt of %d is %d\n", 641135909, ft_sqrt(641135909));
	printf("sqrt of %d is %d\n", 359595369, ft_sqrt(359595369));
	printf("sqrt of %d is %d\n", 2130351245, ft_sqrt(2130351245));
	printf("sqrt of %d is %d\n", 1813567396, ft_sqrt(1813567396)); 
	printf("sqrt of %d is %d\n", 959162111, ft_sqrt(959162111)); 
}   */