#include <stdio.h>

void 	fct(int a)
{
	a = a + 42;
}

void 	fct2(int *a)
{
	*a = *a + 42;
}
  
int	main(void)
{
	int	a;
	int *ptr;
	ptr = 0; //pointer null, tres interessant

	a = 42;
	printf("%d\n", a);
	fct(a);
	printf("%d\n", a);
	fct2(&a);
	printf("%d\n", a);
}
