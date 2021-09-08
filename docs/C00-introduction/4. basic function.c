#include <stdio.h>

void	fct(void);

void	write(void)
{
	printf("Coucou\n");
}

int	fct_force_params(void)
{
	return (42);
}

int	fct_params(char i)
{
	return (i);
}

void write_params(int w) {
    printf("%d\n", w);
}

int triple(int nombre)
{
    int resultat = 0;

    resultat = 3 * nombre;  // On multiplie le nombre fourni par 3
    return resultat;       // On retourne la variable resultat qui vaut le triple de nombre
}

int	main(void)
{	
	printf("Triple %d\n", triple(12));
	write_params(2);
	fct();
	int	i;
	char	i2;

	i = 0;
	printf("%d\n", i); //print 0
	i = fct_force_params();
	printf("%d\n", i); // print 42
	i2 = fct_params(12);
	printf("%d\n", i2); // print 12
}

void	fct(void)
{
	printf("FCT\n");
}
