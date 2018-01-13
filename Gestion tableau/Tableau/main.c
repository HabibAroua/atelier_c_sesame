#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , int *tab);
void afficher(int n , int tab[50]);
void insertion(int e , int p , int *n , int *tab);
void supprimer(int p , int *n , int *tab);
void modifier(int e , int p , int *n , int *tab);

int main()
{
    int n;
    int tab[50];
    saisie(&n);
    remplir(n,tab);
    afficher(n,tab);
    printf("\n");
    insertion(15,2,&n,tab);
    afficher(n,tab);
    supprimer(3,&n,tab);
    afficher(n,tab);
    printf("\n");
    printf("la valeur de n2 est %d \n",n);
    return 0;
}

void saisie(int *n)
{
    int x;
    do
    {
        printf("Donner la taille du tableau \n");
        scanf("%d",&x);
    }while((x>50)||(x<1));
    *n=x;
}

void remplir(int n , int *tab)
{
    int i;
    for (i=0;i<=n;i++)
    {
         printf("Tapez la case %d \n",i);
         scanf("%d",&tab[i]);
    }
}

void afficher(int n , int tab[50])
{
     int i;
     for(i=0;i<=n;i++)
     {
         printf("%d |",tab[i]);
     }
     printf("\n");
}

void insertion(int e , int p , int *n , int *tab)
{

     int i;
     if(*n+1==p)
     {
          tab[p]=e;
          *n++;
     }
     else
     {
          for(i=*n;i>=p;i--)
          {
              tab[i+1]=tab[i];
          }
          tab[p]=e;
          *n=*n+1;
     }
}

void supprimer(int p , int *n , int *tab)
{
     int i;
     if(*n==p)
     {
         *n=*n-1;
     }
     else
     {
          for(i=p;i<*n;i++)
          {
               tab[i]=tab[i+1];
          }
          *n=*n-1;
     }
}

void modifier(int e , int p , int *n , int *tab)
{
    tab[p]=e;
}
