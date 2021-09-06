#include <stdio.h>

void	fct(void);

void	write(void)
{
	printf("Coucou\n");
}

int	fct_force_params(char i)
{
	return (42);
}

int	fct_params(char i)
{
	return (i);
}

int write_params(int w) {
    printf("%d\n", w);
}

int	main(void)
{
	write_params(2);
	fct();
	int	i;
	char	i2;

	i = 0;
	printf("%d\n", i); //print 0
	i = fct_force_params(12);
	printf("%d\n", i); // print 42
	i2 = fct_params(12);
	printf("%d\n", i2); // print 12
}

void	fct(void)
{
	printf("FCT\n");
}
