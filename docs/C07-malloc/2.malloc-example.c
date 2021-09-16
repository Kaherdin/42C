#include <stdlib.h>
#include <stdio.h> 

//https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/16595-lallocation-dynamique
int	main(int argc, char *argv[])
{
	int	nb_amis = 0, i = 0;
	int	*ageAmis = NULL; // Ce pointeur va servir de tableau après l'appel du malloc

    // On demande le nombre d'amis à l'utilisateur
    printf("Combien d'amis avez-vous ? ");
    scanf("%d", &nb_amis);

    if (nb_amis > 0) // Il faut qu'il ait au moins un ami (je le plains un peu sinon :p)
    {
        ageAmis = malloc(nb_amis * sizeof(int)); // On alloue de la mémoire pour le tableau
        if (ageAmis == NULL) // On vérifie si l'allocation a marché ou non
        {
            exit(0); // On arrête tout
        }

        // On demande l'âge des amis un à un
        for (i = 0 ; i < nb_amis ; i++)
        {
            printf("Quel age a l'ami numero %d ? ", i + 1);
            scanf("%d", &ageAmis[i]);
        }

        // On affiche les âges stockés un à un
        printf("\n\nVos amis ont les ages suivants :\n");
        for (i = 0 ; i < nb_amis ; i++)
        {
            printf("%d ans\n", ageAmis[i]);
        }

        // On libère la mémoire allouée avec malloc, on n'en a plus besoin
        free(ageAmis);
    }

    return 0;
}