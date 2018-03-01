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
void AjoutDebut(ListeEntier **L);
void AjoutFin(ListeEntier **L);
void AffichListe(ListeEntier *L);
void LibererListe(ListeEntier *L);
int Exist(ListeEntier *L, int val);
void Supprimer(ListeEntier **L, int val);

int main()
{
   ListeEntier *L ;
   int choix,test,val;
   creeListe(&L);
   do
   {
        printf("_____________________________________________________\n");
        printf("|________________________Menu________________________|\n");
        printf("|1)Ajouter au debut__________________________________|\n");
        printf("|2)Ajouter à la fin__________________________________|\n");
        printf("|3)Afficher la liste_________________________________|\n");
        printf("|4)Vérifier un élément exist ou non__________________|\n");
        printf("|5)Suprimer__________________________________________|\n");
        printf("|6)Libérer___________________________________________|\n");
        printf("|7)Quitter___________________________________________|\n");
        printf("|____________________________________________________|\n");
        do
        {
             printf("Donner votre choix \n");
             scanf("%d",&choix);
        }while((choix>7)&&(choix<1));
        switch(choix)
        {
            case 1 : AjoutDebut(&L);
            break;
            case 2 : AjoutFin(&L);
            break;
            case 3 : AffichListe(L);
            break;
            case 4 : printf("Donner un valeur \n");
                     scanf("%d",&val);
                     test=Exist(L,val);
                     if(test==1)
                     {
                          printf("ce valeur est Exist \n");
                     }
                     else
                     {
                          printf("ce valeur n'existe pas \n");
                     }
            break;
            case 5 : printf("Donner un valeur \n");
                     scanf("%d",&val);
                     Supprimer(&L,val);
            break;
            case 6 : LibererListe(&L);
            break;
            default : printf("Vérifier votre choix \n");
            break;
        }
   }while(choix!=7);


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
     printf("\n");
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

int Exist(ListeEntier *L, int val)
{
     ListeEntier *p;
     int trouve=0;
     p=L;
     while (p!=NULL && trouve==0)
     {
         if (p->valeur==val)
         {
               trouve=1;
         }
         p=p->suivant;
     }
     return(trouve);
}

void Supprimer(ListeEntier **L, int val)
{
     ListeEntier *p, *q;
     p=*L;
     while(p!=NULL && p->valeur!=val)
     {
         p=p->suivant;
     }
     if(p!=NULL)
     {
          if(p==(*L))
          {
               (*L)=(*L)->suivant;
          }
          else
          {
                q=*L;
                while(q->suivant!=p)
                {
                     q=q->suivant;
                }
                q->suivant=p->suivant;
          }
          free(p);
     }
}
