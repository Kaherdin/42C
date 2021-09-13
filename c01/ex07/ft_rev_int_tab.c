/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 16:37:24 by aborst            #+#    #+#             */
/*   Updated: 2021/09/13 12:23:21 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
• Écrire une fonction qui inverse l’ordre 
des élements d’un tableau d’entiers.

• Les paramètres sont un pointeur sur entier 
et le nombre d’entiers dans le tableau.

• La fonction devra être prototypée de la façon suivante : 
void	ft_rev_int_tab(int *tab, int size) 
*/

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	before_i;
	int	after_i;
	int	swap;

	before_i = 0;
	after_i = size - 1;
	while (before_i < size / 2)
	{
		swap = tab[before_i];
		tab[before_i] = tab[after_i];
		tab[after_i] = swap;
		before_i++;
		after_i--;
	}
}

/* int	main(void)
{
	int	tab[] = {0, 1, 2, 3, 4, 5}; 
	int size = 6;
	printf("Before %d\n", tab[0]);
	ft_rev_int_tab(tab, size);
	printf("After %d\n", tab[0]);
	return (0);
} */