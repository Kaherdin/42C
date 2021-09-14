/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/14 18:37:39 by aborst           ###   ########.fr       */
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
	while (racine <= nb / 2)
	{
		multi = racine * racine;
		if (multi == nb)
		{
			return (racine);
		}
		racine = racine + 1;
	}
	return (0);
}

/* int	main(void)
{
	printf("%d", ft_sqrt(65));
}
 */