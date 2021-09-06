#include <stdio.h>

int	main(void)
{
	char	c;
	char	c2;
	char	*str;
	char	str2[] = "cacahouete";

	str2[0] = 'p';
	c = '0';
	c2 = 0; //== c2 = '\0'
	str = "Bidoum";
	printf("%d\n", c);
	printf("%d\n", c2);
	printf("%c %s\n", *str, str);
	printf("%c %s\n", *str2, str2);
}
