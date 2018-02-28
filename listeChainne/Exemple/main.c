#include <stdio.h>
#include <stdlib.h>

struct Maillon
{
   int valeur;
   struct Maillon *suivant;
};

typedef struct Maillon ListeEntier;
void ListeVide(ListeEntier *L);
void creeListe(ListeEntier **L);
void AjoutDebut(ListeEntier **L)
void AjoutFin(ListeEntier **L);
void AffichListe(ListeEntier *L);
void LibererListe(ListeEntier *L);

int main()
{
   ListeEntier *L ;
   creeListe(&L);
   AjoutFin(&L);
   AjoutFin(&L);
   AffichListe(L);


    return 0;
}

void ListeVide(ListeEntier *L)
{
     L=NULL;
}

void creeListe(ListeEntier **L)
{
    ListeEntier *p;
    p=(ListeEntier*)malloc(sizeof(ListeEntier));
    printf ("Entrer un entier \n");
    scanf ("%d", &(p->valeur));
    p->suivant=NULL;
    *L=p;
}

void AjoutDebut(ListeEntier **L)
{
    ListeEntier *p;
    p=(ListeEntier*)malloc(sizeof(ListeEntier));
    printf("Donner un entier : ");
    scanf("%d", &(p->valeur));
    p->suivant=*L;
    *L=p;
}

void AjoutFin(ListeEntier **L)
{
     ListeEntier *p, *l;
     p=(ListeEntier*)malloc(sizeof(ListeEntier));
     printf("Donner un entier : ");
     scanf("%d", &(p->valeur));
     p->suivant=NULL;
     if(*L==NULL)
     {
         *L=p;
     }
     else
     {
         l=*L;
         while(l->suivant!=NULL)
         {
              l=l->suivant;
         }
         l->suivant=p;
     }
}

void AffichListe(ListeEntier *L)
{
     ListeEntier *p;
     for(p=L; p!=NULL; p=p->suivant)
     {
           printf(" %d ", p->valeur);
     }
}

void LibererListe(ListeEntier *L)
{
     ListeEntier *p;
     while(L !=NULL)
     {
         p=L;
         L=L->suivant;
         free(p);
     }
}
