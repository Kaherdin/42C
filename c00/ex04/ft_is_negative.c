/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 20:25:07 by aborst            #+#    #+#             */
/*   Updated: 2021/09/05 17:10:19 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	coucou;
	char	neg;

	coucou = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write(1, &coucou, 1);
		write(1, &coucou, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}
