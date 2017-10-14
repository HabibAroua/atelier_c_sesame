#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f=1;
    printf("Donner n \n");
    scanf("%d",&n);
    for(int i=2 ;i<=n ; i++)
    {
        f*=i;
    }
    printf("La fact est %d  ",f);
    return 0;
}
