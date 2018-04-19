#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define ENTREE "texte.txt"

int main()
{
    FILE* fichier = NULL;
    fichier = fopen(ENTREE, "r+");
    if (fichier != NULL)
    {
        printf("On peut lire et écrire dans le fichier \n");
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    return 0;
}
