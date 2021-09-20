/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:33:51 by aborst            #+#    #+#             */
/*   Updated: 2021/09/20 16:43:45 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = ft_strlen(src);
	str = malloc(sizeof(*str) * (len + 1));
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
	str = "hello wor ld!", res = strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);

	printf("\n--------------\n\n");

	str = "asdf", res = ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);
	str = "", res = ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);	
	str = "hello wor ld!", res = ft_strdup(str);
	printf("%d, '%s' vs '%s'\n", res != str, res, str);
} */
