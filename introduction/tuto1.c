#include <stdio.h>
int b; //global variable

int	main(void)
{
//Un int peut-être signed (par defaut). Signed = -128 a 127 | Unsigned = 0 a 255
    int i; //4 octets
    i = 3222;
    long it; //8 octets

    char c; //1 octets
    c = 'k';

    float f; //4 octets
    f = 12.37;

    double d; //8 octets

    {
        int offScope;
    }

    //offScope = 42 // Non accessible hors du scope {}
    
     



    printf("%lu\n", sizeof(c)); //show size
    printf("hello world\n"); //show hello world with breakline
    printf("%d\n", i); //show value of asm

    //http://www.unit-conversion.info/texttools/ascii/#data
    printf("%d %c\n", c, c); //%d = show ASCII number %c = show in caracters
    printf("%f\n", f); //%f = show float number
}