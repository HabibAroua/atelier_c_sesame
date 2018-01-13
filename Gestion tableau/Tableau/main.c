#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n, int *tab);
void afficher(int n,int tab[50]);

int main()
{
    int n;
    int tab[50];
    saisie(&n);
    remplir(n,tab);
    afficher(n,tab);
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

void remplir(int n, int *tab)
{
    int i;
    for (i=0;i<=n;i++)
    {
         printf("Tapez la case %d \n",i);
         scanf("%d",&tab[i]);
    }
}

void afficher(int n,int tab[50])
{
     int i;
     for(i=0;i<=n;i++)
     {
         printf("%d |",tab[i]);
     }
}
