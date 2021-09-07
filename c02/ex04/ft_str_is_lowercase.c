/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/08 00:57:06 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	cond_check_lowercase(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!cond_check_lowercase(str[i]))
		{
			return (0);
		}			
		++i;
	}
	return (1);
}

/* int	main(void)
{	
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
 */