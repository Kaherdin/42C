#include <stdio.h>

int	main(void)
{
	int	a;
	int	*ptr;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;

	a = 42;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	printf("%d", *****ptr5);
}
