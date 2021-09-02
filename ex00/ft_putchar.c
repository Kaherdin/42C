#include <unistd.h> //import write...
#include <stdio.h> //import printf....

int ft_putchar(int);
/*void afficher (void) {
    printf("Coucou\n");
}

void write (char C) {
    
}*/

int main (void) {
    ft_putchar(10);  
    return(0);
}

int ft_putchar(int c) {
	printf("%d", c);
}

