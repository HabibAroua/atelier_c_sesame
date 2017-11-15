#include <stdio.h>
#include <math.h>
int carre(int n);
int main()
{
    int n,i;
    float s;
    printf("Donner un valeur n \n");
    scanf("%d",&n);
    i=0;
    s=0;
    while(i!=n)
    {
        s=s+(1/n+carre(i));
        i++;
    }
    printf("Le valeur est %f \n",4*sqrt(s));
    return 0;
}
int carre(int n)
{
    return n*n;
}
