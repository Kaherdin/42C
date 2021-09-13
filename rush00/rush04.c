/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: the TAP						            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 11:12:51 by TAP		       #+#    #+#             */
/*   Updated: 2021/09/04 18:32:04 by tbrulhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char c);

void	ft_1_last_line(int irow, int rows, int icol, int col)
{			
	if (icol == 0 && irow == 0)
	{
		ft_putchar('A');
	}
	else if (icol == col - 1 && irow == rows - 1)
	{
		ft_putchar('A');
	}
	else if ((icol == 0 && irow == rows - 1) || (icol == col - 1 && irow == 0))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	ft_columns(int irow, int rows, int icol, int columns)
{
	if (irow == 0 || irow == rows - 1)
	{
		ft_1_last_line (irow, rows, icol, columns);
	}
	else
	{
		if (icol == 0 || icol == columns - 1)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}				
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
