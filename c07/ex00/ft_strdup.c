/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:33:51 by aborst            #+#    #+#             */
/*   Updated: 2021/09/14 19:40:50 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
		len++;
	str = (char *) malloc(sizeof(*str) * (len + 1));
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	*str;
	char	*res;

	str = "asdf", res = strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);
	str = "", res = strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);	
	str = "hello world!", res = strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);

	printf("\n--------------\n\n");

	str = "asdf", res = ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);
	str = "", res = ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);	
	str = "hello world!", res = ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);
}
 */