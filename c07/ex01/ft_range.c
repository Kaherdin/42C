/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:33:51 by aborst            #+#    #+#             */
/*   Updated: 2021/09/20 16:53:59 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	tab = malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

/* int	main(void)
{
	int	*res;
	int	i;
	int	min;
	int	max;

	min = 0; max = 5;
	res = ft_range(min, max);
	for (i = 0; i < (max - min); i++)
		printf("%d,", res[i]);
	printf("\n");

	min = -20; max = -15;
	res = ft_range(min, max);
	for (i = 0; i < (max - min); i++)
		printf("%d,", res[i]);
	printf("\n");

	min = 100; max = 115;
	res = ft_range(min, max);
	for (i = 0; i < (max - min); i++)
		printf("%d,", res[i]);
	printf("\n");

	min = 100; max = 90;
	res = ft_range(min, max);
	for (i = 0; i < (max - min); i++)
		printf("%d,", res[i]);
	printf("\n");
} */
