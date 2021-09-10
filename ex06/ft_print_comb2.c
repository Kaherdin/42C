/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborst <aborst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:36:10 by aborst            #+#    #+#             */
/*   Updated: 2021/09/05 20:55:14 by aborst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(char diz_a, char uni_a, char diz_b, char uni_b)
{
	while (uni_b <= '9')
	{
		if (!((diz_a == diz_b) && (uni_a == uni_b)))
		{
			ft_putchar(diz_a);
			ft_putchar(uni_a);
			ft_putchar(' ');
			ft_putchar(diz_b);
			ft_putchar(uni_b);
			if (!(diz_b == '9'
					&& uni_b == '9'
					&& uni_a == '8'
					&& diz_a == '9'
				))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}	
		}				
		uni_b++;
	}			
}

void	ft_print_comb2(void)
{
	char	diz_a;
	char	uni_a;
	char	diz_b;
	char	uni_b;

	diz_a = '0';
	while (diz_a <= '9')
	{
		uni_a = '0';
		while (uni_a <= '9')
		{	
			diz_b = diz_a;
			while (diz_b <= '9')
			{
				uni_b = uni_a;
				print_number(diz_a, uni_a, diz_b, uni_b);
				diz_b++;
			}
			uni_a++;
		}
		diz_a++;
	}
}

/* int	main(void)
{
	ft_print_comb2();
}
 */
