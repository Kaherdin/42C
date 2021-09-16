/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:33:51 by aborst            #+#    #+#             */
/*   Updated: 2021/09/16 01:43:26 by aborst           ###   ########.fr       */
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
	tab = (int *)malloc(sizeof(*tab) * (max - min));
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
	res = ft_range(5, 10);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = ft_range(-20, -15);
	for (i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = ft_range(100, 101);
	for (i = 0; i < 1; i++)
		printf("%d,", res[i]);
	printf("\n");

	res = ft_range(10, 5);
	printf("%" PRIxPTR "\n", (uintptr_t) res);
} */
