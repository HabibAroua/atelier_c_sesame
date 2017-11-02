#include <stdio.h>
int main()
{
    int i,j;
    float mat[3][3];
    float moyLigne,moyColone,moyGlobale;
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
            printf("Remplir la ligne %d \n",i);
            scanf("%f",&mat[i][j]);
       }
    }
    moyLigne=0;

    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
            moyLigne+=mat[i][j];
       }
       printf("La moyenne de la ligne %d est %f \n ",i+1,moyLigne/3);
       printf("\n");
    }
    moyColone=0;
    moyGlobale=0;
    for(j=0;j<3;j++)
    {
       for(i=0;i<3;i++)
       {
            moyColone+=mat[i][j];
            moyGlobale+=mat[i][j];
       }
       printf("La moyenne de la colone %d est %f \n ",j+1,moyColone/3);
       printf("\n");
    }
    printf("Le moyenne globale est %f \n",moyGlobale/9);
    return 0;
}
