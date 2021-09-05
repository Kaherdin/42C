#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		*ptr;
	int		**ptr3;

	ptr = &a;
	printf("%p\n", ptr);
	ptr = &b;
	ptr3 = &ptr;
	printf("%p\n", ptr);
	printf("%p\n", ptr3);
	return (0);
}
