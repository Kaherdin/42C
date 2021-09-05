#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
			ft_putchar(diz_a);
			ft_putchar(uni_a);
			ft_putchar('/,');
			ft_putchar(' ');
			uni_a++;
		}
		ft_putchar(' ');
		diz_a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
