#include <stdio.h>
//https://www.youtube.com/watch?v=h-HBipu_1P0
int	main(void)
{
	int		a;
	int		*ptr;

	ptr = &a;
    a = 8;
	printf("%p\n", ptr); //address/location of a
	printf("%p\n", &a); //address/location of a also
	printf("%p\n", &ptr); //address/location of ptr
	printf("%i\n", *ptr); //value at the address/location of ptr. Deferencing
    *ptr = 100;
    printf("%i\n", a); //new value of a (100)
	return (0);
}
