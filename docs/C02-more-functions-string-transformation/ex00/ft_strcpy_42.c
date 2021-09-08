#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/* int	main(void)
{
	//La taille des 2 strings est differentes, du coup, il y a une erreur
	char dest[] = "aterassa";
	char src[] = "reussir";

	printf("String 1 = %s\n", dest);
	printf("String 2 = %s\n", src);
	ft_strcpy(dest, src);
	printf("String 1 is now = %s\n", &dest);
	return (0);
} */

int	main(void)
{
	char	*dest;
	char	*src;

	dest = "Tu vas rater";
	src = "Tu vas réussir !";
	printf("String 1 = %s\n", dest);
	printf("String 2 = %s\n", src);
	ft_strcpy(&dest, &src);
	printf("String 1 is now = %s\n", dest);
	return (0);
}
