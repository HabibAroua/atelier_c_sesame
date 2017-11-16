#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[50]; char ch2[50]; char ch3[50];
    int j,i,k;
    puts("Donner une chaine 1");
    gets(ch1);
    puts("Donner une chaine 2");
    gets(ch2);
    j=0; k=-1;
    while(j!=strlen(ch1))
    {
         for(i=0;i<strlen(ch2);i++)
         {
             if(ch2[i]==ch1[j])
             {
                 ch3[k++]=ch2[i];
             }
         }
         j++;
    }
    printf("La chaine est %s \n",ch3);
    return 0;
}
