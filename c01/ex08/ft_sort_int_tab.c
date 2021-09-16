/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:21:05 by aborst            #+#    #+#             */
/*   Updated: 2021/09/16 18:04:15 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}	
}

/* int	main(void)
{
	int	tab[] = {123, 2, 30, 23, 100, 42, 21, -1, 2333, 5, 12, 1, 212, 9389, 14};
	int i = 0;
	int j = 0;

	//*size_t size = sizeof(tab)/sizeof(tab[0]);
	int size = sizeof(tab)/sizeof(tab[0]);	
	printf("size 2%d\n", size);
	

	
	printf("before : "); 
	while (i < size)
	{
		printf("%d ", tab[i]); 
		i++;
	}
	ft_sort_int_tab(tab, size);
	
	printf("\nafter : "); 
	while (j < size)
	{
		printf("%d ", tab[j]); 
		j++;
	}
} */
