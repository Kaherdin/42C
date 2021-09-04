

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;
	int	*str2;

	*(&str2) = "";
	first = '0';
	while (first <= '99')
	{
		ft_putchar(first);
		first++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
