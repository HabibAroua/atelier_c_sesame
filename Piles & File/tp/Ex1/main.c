#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define ENTREE "texte.txt"

typedef char TypeDonnee;
typedef struct Cell
{
    TypeDonnee donnee;
    struct Cell *suivant; /* pointeur sur la cellule suivante */
}TypeCellule;

typedef TypeCellule* Pile; /* la pile est un pointeur */
/* sur la tête de liste */



int main()
{
    Pile p;
    //Init_Pile(&p);
    Empiler(&p,'a');
    char a=p->donnee;
    printf("le 1er element is %c \n",a);
    FILE* fichier = NULL;
    char caractereActuel;
    fichier = fopen(ENTREE, "r+");
    if (fichier != NULL)
    {
        do
        {
            caractereActuel = fgetc(fichier); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF
        fclose(fichier);
    }
    else
    {
        // On affiche un message d'erreur si on veut
        printf("Impossible d'ouvrir le fichier test.txt");
    }
    return 0;
}

void Init_Pile(Pile *p)
{
    struct Pile *p1=NULL;
    p=p1;
}

int Pile_vide(struct Pile *p)
{
     if(p==NULL)
     {
           return 1;
     }
     else
     {
           return 0;
     }
}

void Empiler(Pile *p , TypeDonnee c)
{
    Pile q;
    q = (TypeCellule*)malloc(sizeof(TypeCellule));
    q->donnee=c;
    q->suivant=p;
    *p=q;
}
