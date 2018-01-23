#include <stdio.h>
#include <stdlib.h>

void saisie(int *n);
void remplir(int n , int M[20][20]);
void afficher(int n , int M[20][20]);
void Trier(int n , int M[20][20]);
void Inverser(int n , int M[20][20]);

int main()
{
    int n,choix;
    int M[20][20];
    saisie(&n);
    do
    {
         printf("*******************Menu***********************\n");
         printf("1)Remplir la matrice**************************\n");
         printf("3)Trier la matrice****************************\n");
         printf("4)Inverser la matrice*************************\n");
         printf("5)Quitter*************************************\n");
         printf("**********************************************\n");
         printf("\n");
         printf("Donner votre choix \n");
         scanf("%d",&choix);
    }while(choix<1 || choix>5);
    return 0;
}

void saisie(int *n)
{
    int x;
    do
    {
        printf("Donner la taille de la matrice carree \n");
        scanf("%d",&x);
    }while((x>20)||(x<1));
    *n=x;
}

void remplir(int n , int M[20][20])
{
     int i,j;
     int x;
     for(i=0 ; i<n ; i++)
     {
          for(j=0 ; j<n ; j++)
          {
              printf("Tapez la case %d de la ligne %d ",j,i);
              scanf("%d",&x);
              M[i][j]=x;
          }
     }
}

void afficher(int n , int M[20][20])
{
    int i,j;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
              printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}

void Trier(int n , int M[20][20])
{
    int nb,aux,i,j,k=0;
    int t[40];
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
             t[k]=M[i][j];
             k=k+1;
        }
    }
    do
    {
         nb=0;
         for (k=0 ; k<n*n-1 ; k++)
         {
              if(t[k]>t[k+1])
              {
                  aux=t[k];
                  t[k]=t[k+1];
                  t[k+1]=aux;
                  nb++;
              }
         }
    }while(nb!=0);
    k=0;
    for(i=0 ; i<n ; i++)
    {
       for( j=0 ; j<n ; j++)
       {
            M[i][j]=t[k];
            k++;
       }
    }
    printf("\n");
}

void Inverser(int n , int M[20][20])
{
     printf("\n");
     int i=0,j,aux;
     for(i=0 ; i<n ; i++)
     {
         for(j=0 ; j<i ; j++)
         {
              aux=M[i][j];
              M[i][j]=M[j][i];
              M[j][i]=aux;
         }
         printf("\n");
     }
     printf("\n");
}
