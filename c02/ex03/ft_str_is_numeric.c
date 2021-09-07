/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/08 00:44:35 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	cond_check_number(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!cond_check_number(str[i]))
		{
			return (0);
		}			
		++i;
	}
	return (1);
}

/* int	main(void)
{	
	printf("%d\n", ft_str_is_numeric("123213"));
	return (0);
}
 */