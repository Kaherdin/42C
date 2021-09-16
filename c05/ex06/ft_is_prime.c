/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 22:47:22 by aborst            #+#    #+#             */
/*   Updated: 2021/09/16 19:51:21 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (nb % i != 0)
	{
		if (i > nb)
			return (0);
		++i;
	}
	if (nb == i)
		return (1);
	return (0);
}

/* int	main(void)
{
	printf("%d\n", ft_is_prime(0)); //0
	printf("%d\n", ft_is_prime(1)); //0
	printf("%d\n", ft_is_prime(6)); //0 
	printf("%d\n", ft_is_prime(13)); //1
	printf("%d\n", ft_is_prime(14)); //0
	printf("%d\n", ft_is_prime(15)); //0
	printf("%d", ft_is_prime(7)); //1  
}
 */