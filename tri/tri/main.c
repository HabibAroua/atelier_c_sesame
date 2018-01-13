#include <stdio.h>
void saisir(int *n);
void remplir(int n,int *t);
void afficher(int n,int t[20]);
int main()
{
    int n=10;
    int t[20]={0};
    saisir(&n);
    remplir(n,&t);
    afficher(n,&t);
    return 0;
}

void saisir(int *n)
{
    int x;
    do
    {
        printf("Donner la taille de tableau \n");
        scanf("%d",&x);
    }while((x>20)||(x<1));
    *n=x;
}

void remplir(int n,int *t)
{
     int x=0;
     for(int i=0;i<n;i++)
     {
          printf("Tapez la case %d \n",i);
          scanf ("%d", &x);
          *t = x;
     }
     printf("la valeur de n est %d \n",n);
}

void afficher(int n,int t[20])
{
     int x;
     printf("L'affichage de tableau \n");
     for(int i=0;i<n;i++)
     {
          x=&t[i];
          printf("%d | ",x);
     }
}
