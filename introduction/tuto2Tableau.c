#include <stdio.h>

int main () {
    int a; 
    a = 12;
    printf("%d\n", a);

    int b[10];
    b[0] = 15;
    b[9] = 22;
    b[3] = b[0];
    printf("%d\n", b[3]);

    int c[10][10];
    c[0][1] = 22;
    c[9][3] = 22;
    c[3][4] = c[0][1];
    c[0][b[9]] = 23;
    printf("%d\n", c[0][b[9]]);
}