#include <stdio.h> //import printf....

int write(int);


int main (void) {
    write(3);
    return(0);
}

int write(int w) {
    printf("%d\n", w);
}