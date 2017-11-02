#include <stdio.h>


int main()
{
    int i,j,n;
    int mat[100][100];
    do
    {
       printf("Donner un nombre n \n");
       scanf("%d",&n);
    }while(n<0);
    for(i=0 ;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
           if((j==0)||(i==j))
           {
               mat[i][j]=1;
           }
           else
           {
               mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
           }
       }
    }
    for(i=0 ;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
           printf("%d ",mat[i][j]);
       }
       printf("\n");
    }
    return 0;
}
