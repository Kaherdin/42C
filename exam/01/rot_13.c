/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 23:41:56 by aborst            #+#    #+#             */
/*   Updated: 2021/09/21 01:19:14 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_a_m(char c)
{
	if (('a' <= c && 'm' > c) || ('A' <= c && 'N' > c))
		return (1);
	else
		return (0);
}

int	ft_is_n_z(char c)
{
	if (('n' <= c && 'z' >= c) || ('N' <= c && 'Z' >= c))
		return (1);
	else
		return (0);
}

char	*rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_a_m(str[i]) == 1)
			str[i] += 13;
		 else if (ft_is_n_z(str[i]) == 1)
			str[i] -= 13;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[1024] = "AkjhZ zLKIJz , 23y ";
	//char	str[1024] = "My horse is Amazing.";
	//char	str[1024] = "abc";
	//ft_putstr(str);
	printf("%s", rot13(str));
} */