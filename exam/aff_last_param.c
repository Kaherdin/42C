/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 02:30:49 by aborst            #+#    #+#             */
/*   Updated: 2021/09/17 02:38:35 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* int	main(int argc, char **argv)
{
	int	len;

	if (argc < 2)
	{
		ft_putchar('\n');
	}
	else
	{
        len = 0;
        while (argv[argc - 1][len])
            len++;
        write(1, argv[argc - 1], len);	
	}
} */

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_putstr(argv[argc - 1]);
	ft_putchar('\n');
	return (0);
}
