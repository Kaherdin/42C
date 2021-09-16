#include <stdio.h>
#include <stdlib.h>

//https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/16595-lallocation-dynamique

typedef struct s_coordonnees	t_coordonnees;
struct s_coordonnees
{
	int	x;
	int	y;
};

int	main(void)
{
	//int	*p_number = (int*)malloc(25*sizeof(int));
	int	*p_number;
	p_number = (int*)malloc(25*sizeof(int));
	printf("p: %p\n", p_number);
	printf("d: %d\n", *p_number);
	free(p_number);

	printf("char : %lu octets\n", sizeof(char));
	printf("int : %lu octets\n", sizeof(int));
	printf("long : %lu octets\n", sizeof(long));
	printf("double : %lu octets\n", sizeof(double));

	printf("Coordonnees : %lu octets\n", sizeof(t_coordonnees));

	int *memoireAllouee = NULL;

    memoireAllouee = malloc(sizeof(int)); // Allocation de la mémoire
    if (memoireAllouee == NULL)
    {
        exit(0);
    }

    // Utilisation de la mémoire
/*     printf("Quel age avez-vous ? ");
    scanf("%d", memoireAllouee);
    printf("Vous avez %d ans\n", *memoireAllouee);
 */
    free(memoireAllouee); // Libération de mémoire

	char str = 'N';
	printf("Octal : %o\n", str);

	int ptr = 3;
	printf("cara %c\n", ptr); // a character
	//printf("Octal : %d", int2);

/* 	printf("%d\n", ptr); // signed decimal int
	printf("%u\n", ptr); // unsigned decimal int
	printf("%o\n", ptr); // unsigned octal int
	printf("%x\n", ptr); // unsigned hexadecimal int
	printf("%f\n", ptr); // signed decimal float
	printf("%e\n", ptr); // signed decimal scientific notation
	printf("%g\n", ptr); // shortest representation of
	printf("%a\n", ptr); // signed hexadecimal float
	printf("%c\n", ptr); // a character
	printf("%s\n", ptr); // a string
	printf("%p\n", ptr); // a pointer
	printf("%n\n", ptr); // no output  */

}