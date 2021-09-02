#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_print_comb(void)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = '0';
	while (centaine <= '7')
	{
		dizaine = centaine;
		while (dizaine++ < '8')
		{
			unite = dizaine;
			while (unite++ < '9')
			{
				ft_putchar(centaine);
				ft_putchar(dizaine);
				ft_putchar(unite);
				if (centaine != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		centaine++;
	}
}

int	main(void)
{
	ft_print_comb();
}
