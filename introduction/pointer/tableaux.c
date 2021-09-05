#include <stdio.h>

int	main(void)
{
	int	tab[5];
	int	*tab2[2];

	//tab[1] == *(tab + 1);
	//tab[n] == *(tab + n);
	//ptr = tab;
	printf("%p\n", tab);
	tab[0] = 111;
	printf("%d\n", *tab);
	tab[1] = 333;
	printf("%d\n", *(tab + 1));
	tab[2] = 666;
	printf("%d\n", *(tab + 2));
	tab[3] = 999;
	printf("%d\n", *(tab + 3));
	tab[4] = 1111;
	printf("%d\n", *(tab + 4));
	//////////////////////////
	tab[2] = 145;
	tab2[1] = tab;
	printf("%d\n", *(tab + 2));
	tab2[1][2] = 18; //== *(tab2[1] + 2) = 18; == *(*(tab +1) +2) = 18;
	printf("%d\n", *(tab + 2));
	*(tab2[1] + 2) = 20;
	printf("%d\n", *(tab + 2));
}
