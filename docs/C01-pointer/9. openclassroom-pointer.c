#include <stdio.h>
#include <stdlib.h>

/* sur une variable, comme la variable age:

age signifie : « Je veux la valeur de la variableage»,

&age signifie : « Je veux l'adresse à laquelle se trouve la variableage» ;

sur un pointeur, comme pointeurSurAge:

pointeurSurAge signifie : « Je veux la valeur depointeurSurAge» (cette valeur étant une adresse),

*pointeurSurAge signifie : « Je veux la valeur de la variable qui se trouve à l'adresse contenue danspointeurSurAge». */

void decoupeMinutes(int *heures, int *minutes)
{
    *heures = *minutes / 60;  // 90 / 60 = 1
    *minutes = *minutes % 60; // 90 % 60 = 30
}

//int main(int argc, char *argv[])
int main(void)
{
	int age = 10;
	int *pointeurSurAge; // 1) signifie "Je crée un pointeur"
	pointeurSurAge = &age; // 2) signifie "pointeurSurAge contient l'adresse de la variable age
	printf("Pointeur sur age %d\n", *pointeurSurAge);
	printf("Addresse de pointeur sur age %p\n", &pointeurSurAge);
	printf("Addresse de age %p\n", pointeurSurAge);
	printf("Addresse de age %p\n", &age);


    int hours = 0, min = 90;

    /* On a une variable minutes qui vaut 90.
    Après appel de la fonction, je veux que ma variable
    "heures" vaille 1 et que ma variable "minutes" vaille 30 */

    printf("addresse h: %p et min %p\n ", &hours, &min);  //addresse pointer
    printf("%d heures et %d minutes\n", hours, min); //valeur des variables hours et min avant modif
    decoupeMinutes(&hours, &min);
    printf("%d heures et %d minutes\n", hours, min); //valeur des variables hours et min avant modif


    return 0;
}

