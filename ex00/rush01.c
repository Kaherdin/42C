/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: the TAP						            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 11:12:51 by TAP		       #+#    #+#             */
/*   Updated: 2021/09/04 14:56:20 by TAP              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	ft_other_col(int ic, int col)
{
	if (ic == 0 || ic == col - 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_columns(int ir, int rows, int ic, int col)
{
	if (ir == 0 || ir == rows - 1)
	{
		if ((ic == 0 && ir == 0) || (ic == col - 1 && ir == rows - 1))
		{
			ft_putchar('/');
		}
		else if ((ic == col - 1 && ir == 0) || (ic == 0 && ir == rows - 1))
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
	}
	else
	{
		ft_other_col(ic, col);
	}
}

void	rush(int x, int y)
{
	int	irow;
	int	icol;

	irow = 0;
	while (irow < y)
	{
		icol = 0;
		while (icol < x)
		{
			ft_columns(irow, y, icol, x);
			icol++;
		}
		ft_putchar('\n');
		irow++;
	}
}
