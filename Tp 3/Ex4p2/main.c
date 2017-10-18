#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,r,test;
    printf("Donner un entier\n");
    scanf("%d",&n);
    i=2;
    while((i!=n/2) && (test!=1) && (test!=0) )
    {
        if(n%i==0)
        {
            printf("Ce nombre est non premier \n");
            test=1;
        }
        else
        {
            printf("Ce nombre est premier \n");
            test=0;
        }
    }
    return 0;
}
