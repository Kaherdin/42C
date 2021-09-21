/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:04:53 by aborst            #+#    #+#             */
/*   Updated: 2021/09/21 20:14:24 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	point;

	printf("%d", point);
	return (0);
}
