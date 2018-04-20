#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define ENTREE "texte.txt"

typedef struct Element Element;
struct Element
{
    char val;
    Element *suivant;
};

typedef struct Pile Pile;
struct Pile
{
    Element *premier;
};


int main()
{
    Pile p;
    FILE* fichier = NULL;
    char caractereActuel;
    fichier = fopen(ENTREE, "r+");
    if (fichier != NULL)
    {
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
            if((caractereActuel=='(') || (caractereActuel=='{') || (caractereActuel=='['))
            empiler(&p,caractereActuel);
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    afficherPile(&p);
    return 0;
}

void empiler(Pile *pile, char nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->val = nvNombre;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}

int depiler(Pile *pile)
{
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int nombreDepile = 0;
    Element *elementDepile = pile->premier;

    if (pile != NULL && pile->premier != NULL)
    {
        nombreDepile = elementDepile->val;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }

    return nombreDepile;
}

void afficherPile(Pile *pile)
{
    Pile tmp = *pile;
    while(tmp != NULL)
    {
        printf("%c ", tmp->premier.val);
        tmp = tmp->premier.suivant;
    }
}
