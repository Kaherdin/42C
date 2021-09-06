#include <stdio.h>

int	main(void)
{
	int	c;
	int	b;
	int	a;
	int	*ptr;

	a = 21;
	ptr = &a;
	/*printf("%p\n", ptr);
	printf("%p\n", &b);
	printf("%p\n", ptr + 1);
	printf("%p\n", *(ptr + 1));*/
	*(ptr + 1) = 22;
	*(ptr + 2) = 78;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
}

/* 	!! L ordre de declaration des ints change !!!!!
Quand modifie l adresse d un pointeur on appelle le prochain int... */
