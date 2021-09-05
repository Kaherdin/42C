#include <stdio.h>

int	main(void)
{
	int		a;
	int		b;
	int		*ptr;

	b = 23;
	ptr = &a;
	printf("%p\n", ptr);
	printf("%p\n", &b);
	printf("%p\n", ptr + 1);
	return (0);
}
