#include <stdio.h>
void saisir(int *n);
void remplir(int n,int *t);

int main()
{
    int n=10;
    int t[20];
    saisir(&n);
    remplir(n,&t);
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
