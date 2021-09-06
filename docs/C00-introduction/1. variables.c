#include <stdio.h>

int	g_b; //global variable

int	main(void)
{
	int		i; //4 octets
	long	it; //8 octets
	char 	c; //1 octets
	char 	*cstring; //8 octets
	float 	f; //4 octets
	double 	d; //8 octets	
	i = 3222;
	c = 'k';
	cstring = "longstringasssss";
	f = 12.37;
	{
		int offScope;
	}
	//offScope = 42 // Non accessible hors du scope {}
	printf("%lu\n", sizeof(c)); //show size
	printf("%s\n", cstring); //show string
	printf("Size of cstring is %lu\n", sizeof(cstring)); 
	printf("%d\n", i); //show value of asm
	//http://www.unit-conversion.info/texttools/ascii/#data
	printf("%d %c\n", c, c); //%d = show ASCII number %c = show in caracters
	printf("%f\n", f); //%f = show float number
}

/* 
printf("%d\n", ptr); // signed decimal int
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
printf("%n\n", ptr); // no output 
*/
