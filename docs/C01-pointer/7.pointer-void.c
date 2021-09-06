#include <stdio.h>

void	fct(int a)
{
	a = a + 42;
}

int	main(void)
{
	void	*ptr;
	int		*ptr_i;
	char	*ptr_c;

	ptr = ptr_c;
	ptr = &ptr;
	ptr = ptr_i;
	ptr_c = ptr;
}
