#include <stdio.h>

int main()
{
    const int max=200;
    int n=0,i;
    int test;
    while(n!=max)
    {
        for(i=2;i<n/2;i++)
        {
           if(n%i!=0)
           {
               test=1;
           }
           else
           {
               test=0;
               break;
           }
        }
        if(test)
        {
            int res=4;
            for(int j=0;j<6;j++)
            {
                if(res-1==n)
                {
                    printf("%d est Un nombre premier de Mersenne \n",n);
                }
                res=(res*2);
            }
        }
        n++;
    }
    return 0;
}
