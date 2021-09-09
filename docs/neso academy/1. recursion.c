/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1. recursion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 23:33:26 by aborst            #+#    #+#             */
/*   Updated: 2021/09/09 23:45:43 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//Recursion is a process in which a function call itself

int	fun(int nb)
{
	if (nb==0) 
	{
		return (1);
	}
	else
	{
		return (nb * fun(nb-1));
	}
		
}

int	main()
{
	int n = 0;
	printf("%d", fun(n));
	return (0);
}