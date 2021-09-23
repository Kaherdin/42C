/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:38:18 by aborst            #+#    #+#             */
/*   Updated: 2021/09/23 19:46:02 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
     if (argc == 2)
     {  
        int i;
        i = 0;
         while(argv[1][i])
         {
            if (ft_is_lowercase(argv[1][i]) == 1)
                argv[1][i] -= 32;
            else if (ft_is_uppercase(argv[1][i]) == 1)
                argv[1][i] += 32;
            ft_putchar(argv[1][i]);
            i++;
         }
     }
     ft_putchar('\n');
}