#include <stdio.h>
#include <stdlib.h>

void test(int *pa, int *pb)
{
    *pa = 10;
    *pb = 20;
}


int main(void)
{
    int a;
    int b;
    int *pa = &a;
    int *pb = &b;
    int pc = 222;
    int pd = 333;
    //int *pc = malloc(sizeof(int) * 10);
    //printf("%p", pc);

    //str = (char *) malloc(sizeof(*str) * (len + 1));

    test(&a, &b); //Idem
    test(pa, pb); //Idem
    printf("a = %d, b = %d\n", a, b);
    printf("a = %d, b = %d\n", *pa, *pb);
    printf("pc = %d, od = %d\n", pc, pd);
    return 0;

    
}