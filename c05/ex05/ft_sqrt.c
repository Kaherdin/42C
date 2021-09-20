/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/20 14:45:02 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

/* int	main(void)
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
	res = ft_sqrt(-125), exp = 0;
	printf("root -125 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(1640045925), exp = 0;
	printf("root 1640045925 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(2147395600), exp = 46340;
	printf("root 2147395600 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(2147483646), exp = 0;
	printf("root 2147483646 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(917362944), exp = 30288;
	printf("root 917362944 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(1926881480), exp = 0;
	printf("root 1926881480 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(464919844), exp = 21562;
	printf("root 464919844 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(274208610), exp = 0;
	printf("root 274208610 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(115820644), exp = 10762;
	printf("root 115820644 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(641135909), exp = 0;
	printf("root 641135909 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(359595369), exp = 18963;
	printf("root 359595369 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(2130351245), exp = 0;
	printf("root 2130351245 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(1813567396), exp = 42586;
	printf("root 1813567396 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(959162111), exp = 0;
	printf("root 959162111 (%d vs %d) -> %d\n", res, exp, res == exp);
	res = ft_sqrt(1678870481), exp = 0;
	printf("root 1678870481 (%d vs %d) -> %d\n", res, exp, res == exp);
}   */ 