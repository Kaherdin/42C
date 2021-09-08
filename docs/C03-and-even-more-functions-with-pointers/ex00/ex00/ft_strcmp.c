/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 18:55:36 by aborst            #+#    #+#             */
/*   Updated: 2021/09/09 00:21:08 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <assert.h>

char	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		printf("i: %d\n", i);
		i++;
	}
	printf("s1: %d, s2: %d ", s1[i], s2[i]);
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	s1[] 	= "aaaaaaaaaaa";
	char	s2[] 	= "aaaaaaaaaaa";

	printf("Result: %d\n", ft_strcmp(s1, s2));
	

	return (0);
} 

/* int		main(void)
{
	assert(ft_strcmp("ab", "ab") == 0);
	assert(ft_strcmp("ac", "ab") > 0);
	assert(ft_strcmp("aa", "ab") < 0);
	printf("OK ft_strcmp\n");
	return (0);
} */
