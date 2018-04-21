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
    Pile *maPile =NULL;
    Pile *invPile=NULL;
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
            {
                 empiler(&maPile,caractereActuel);
            }
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    afficherPile(&maPile);
    printf("_________\n");
    empiler(&invPile,(char)sommet(&maPile));
    afficherPile(&invPile);
    printf("Le sommet est %c \n",(char)sommet(&invPile));

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
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Element *actuel = pile->premier;

    while (actuel != NULL)
    {
        printf("%c\n", actuel->val);
        actuel = actuel->suivant;
    }
    printf("\n");
}

int sommet(Pile *p1)
{
    return (int)p1->premier->val;
}
