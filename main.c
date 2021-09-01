#include <stdio.h>

int main () {
    int i; //4 octets
    i = 3222;

    char c; //1 octets
    c = 'k';

    float f; //4 octets
    f = 12.37;

    double d; //8 octets


    printf("%lu\n", sizeof(c)); //show size
    printf("hello world\n"); //show hello world with breakline
    printf("%d\n", i); //show value of asm

    //http://www.unit-conversion.info/texttools/ascii/#data
    printf("%d %c\n", c, c); //%d = show ASCII number %c = show in caracters
    printf("%f\n", f); //%f = show float number
}