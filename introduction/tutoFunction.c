#include <stdio.h>

void fct(void);

void write (void) {
    printf("Coucou\n");
}

int main (void) {
    write();
    fct();
    return(0);
}

void fct (void) {
    printf("FCT\n");
}