#include <stdio.h>
#include <stdlib.h>

struct Maillon
{
   int valeur;
   struct Maillon *suivant;
};

typedef struct Maillon ListeEntier;
void ListeVide(ListeEntier *L);
void creeListe(ListeEntier *L);
int main()
{
   ListeEntier *L ;
   ListeVide(L);


    return 0;
}

void ListeVide(ListeEntier *L)
{
     L=NULL;
}

void creeListe(ListeEntier *L)
{
    ListeEntier *p;
    p=(ListeEntier*)malloc(sizeof(ListeEntier));
    printf ("Entrer un entier \n");
    scanf ("%d", &(p->valeur));
    p->suivant=NULL;
    L=p;
}
