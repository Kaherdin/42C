/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:38:15 by aborst            #+#    #+#             */
/*   Updated: 2021/09/07 16:56:22 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr_point)
{
	*nbr_point = 42;
}

//ALL EXAMPLE BELLOW SEEMS TO WORK
int	main(void)
{
	int	*number;

	number = 20;
	printf("%d\n", number);
	ft_ft(&number);
	printf("%d\n", number);
}
/* int	main(void)
{	
	int	a;
	int	*number;

	a = 100;
	number = &a;
	*number = 20;
	printf("%d\n", *number);
	ft_ft(number);
	printf("%d\n", *number);
} */

/* int	main(void)
{	
	int	nbr;
	int	*ptr;

	nbr = 0;
	ptr = &nbr;
	printf("Old : %d\n", nbr);
	ft_ft(ptr);
	printf("New : %d\n", nbr);
}
 */