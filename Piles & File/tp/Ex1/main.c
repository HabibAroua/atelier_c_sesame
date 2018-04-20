#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define ENTREE "texte.txt"

typedef struct Cell
{
    char donnee;
    struct Cell *suivant; /* pointeur sur la cellule suivante */
}TypeCellule;

typedef TypeCellule* Pile; /* la pile est un pointeur */
/* sur la tête de liste */
Pile Initialiser();
int EstVide(Pile P);

int main()
{
    Pile p;
    p=NULL;
    FILE* fichier = NULL;
    char caractereActuel;
    fichier = fopen(ENTREE, "r+");
    if (fichier != NULL)
    {
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
            Empiler(&p,caractereActuel);
            afficher(&p);
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    afficher(&p);

    return 0;
}

Pile Initialiser()
{
     return NULL; /* on retourne une liste vide */
}

void Empiler(Pile* pP, char elem)
{
    Pile q;
    q = (TypeCellule*)malloc(sizeof(TypeCellule)); /* allocation */
    q->donnee = elem; /* ajout de l’élément à empiler */
    q->suivant = *pP; /* insertion en tête de liste */
    *pP =q; /* mise à jour de la tête de liste */

}


int EstVide(Pile P)
{
     /* renvoie 1 si la liste est vide */
     return (P == NULL) ? 1 : 0;
}

void afficher(Pile *p)
{
     Pile p1=*p;
     while(EstVide(p1))
     {
          printf("%c \n",p1->donnee);
          p1=p1->suivant;
     }
}
