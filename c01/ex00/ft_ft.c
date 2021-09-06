#include <stdio.h>

void	ft_ft(int *nbr_point)
{
	*nbr_point = 42;
}

int	main(void)
{
	int	number;
	int	*ptr;

	number = 20;
	printf("%d\n", number);
	ptr = &number;
	ft_ft(ptr);
	printf("%d\n", number);
}
