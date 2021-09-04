#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_columns(int irow, int rows, int icol, int columns)
{
	if (irow == 0 || irow == rows - 1)
	{
		if (icol == 0 || icol == (columns - 1))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
	}
	else
	{
		if (icol == 0 || icol == columns - 1)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}				
	}
}

int	rush(int columns, int rows)
{
	int	irow;
	int	icol;

	irow = 0;
	while (irow < rows)
	{
		icol = 0;
		while (icol < columns)
		{
			ft_columns(irow, rows, icol, columns);
			icol++;
		}
		ft_putchar('\n');
		irow++;
	}
}

int	main(void)
{
	int const	rows = 2;
	int const	columns = 5;

	rush(columns, rows);
	return (0);
}
