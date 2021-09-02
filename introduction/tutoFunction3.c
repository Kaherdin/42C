#include <stdio.h>

int fct(char i);

int main (void) {
    int i;
    i = 0;
    printf("%d\n", i);

    i = fct(12);
    printf("%d\n", i);
}

int fct (char i) {
    return(42);
}