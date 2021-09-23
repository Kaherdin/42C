#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_is_prime(int nbr)
{
	int	i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_is_whitespace(char c)
{
	if (c >= '\t' || c <= '\n' || c <= '\v' || c <= '\f' || c <= '\r' || c <= ' ')
		return (1);
	else
		return (0);
}

int	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

 void ft_str_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_int_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

char *ft_strcpy(char * dest, const char * src)
{
	int i;

	i = 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	(void) **argv;
	int	i;

	int a;
	int b;
 	char *s1, *s2;
	s1 = "hibou";
	s2 = "coucou";
	a = 12;
	b = 44;

	i = 1;
	while (i < argc)
	{
		printf("nb arg %d\n", argc);
		i++;
	}
	ft_putnbr(-122225555);
	ft_putchar('\n');
	//printf("%d", ft_is_alpha('y'));

	//Swap string
 	printf("a: %s, b: %s\n", s1, s2);
	ft_str_swap(&s1, &s2);
	printf("a: %s, b: %s\n", s1, s2); 

	//Swap number
	printf("s1: %d, s2: %d\n", a, b);
	ft_int_swap(&a, &b);
	printf("s1: %d, s2: %d\n", a, b);
	
	printf("%d\n", ft_is_prime(13)); //13 and 113 = true;

	char	dest[30] = "Tu vas rater"; //Good to give the same size to both array
	char	src[30] = "Tu vas réussir !"; //Good to give the same size to both array
	printf("String 1 = %s\n", dest); 
	printf("String 2 = %s\n", src);
	ft_strcpy(dest, src);
	printf("String 1 is now = %s\n", dest);
}
