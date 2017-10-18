#include <stdio.h>

int main()
{
    int n,p,i,max,min;
    printf("Donner n \n");
    scanf("%d",&n);
    i=0;
    while(i!=n)
    {
        for(int j=0;j<=i;j++)
        {
          printf("*");
        }
        printf("\n");
        i++;
    }
    printf("\n \n");

    i=0;
    while(i!=n)
    {
        for(int j=0;j<n;j++)
        {
           printf("*");
        }
        printf("\n");
        i++;
    }

    do
    {
        printf("Donner un nombre impaire \n");
        scanf("%d",&p);
    }while(p%2==0);
    max=n/2+1;
    min=n/2+1;
    int h=0;
    while((max!=n+3) && (min!=-3) && (h<n) )
    {
         for(int i=0;i<=max;i++)
         {
             if((i>=min)&&(i<=max))
             {
                printf("*");
             }
             else
             {
                printf(" ");
             }
         }
         printf("\n");
         h++;
         max++;
         min--;
    }

    max=n/2+1;
    min=n/2+1;
     h=0;
    while((max!=n) && (min!=0) && (h<n) )
    {
         for(int i=0;i<=max;i++)
         {
             if((i>=min)&&(i<=max))
             {
                printf("*");
             }
             else
             {
                printf(" ");
             }
         }
         printf("\n");
         h++;
         max++;
         min--;
    }

    max=n;
    min=0;
     h=0;
    while((max!=min) && (h<n) )
    {
         for(int i=0;i<=max;i++)
         {
             if((i>=min)&&(i<=max))
             {
                printf("*");
             }
             else
             {
                printf(" ");
             }
         }
         printf("\n");
         h++;
         max--;
         min++;
    }
    return 0;
}
