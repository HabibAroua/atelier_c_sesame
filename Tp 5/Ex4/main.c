#include <stdio.h>
#include<string.h>

int main()
{
   char ch1[20]; char ch2[20];
   char aux;
   int j,i;
    do
    {
        puts("Donner une chaine 1");
        gets(ch1);
        puts("Donner une chaine 2");
        gets(ch2);
    }while((strlen(ch1)-1%2==0) || (strlen(ch2)-1%2==0));
    //inverse la chaine ch1
    j=strlen(ch1)-1;
    i=0;
    while(j!=-1 && i!=strlen(ch1)  && j>i )
    {
        aux=ch1[j];
        ch1[j]=ch1[i];
        aux=ch1[i]=aux;
        j--;
        i++;
    }
    printf("La chaine ch1 est %s \n",ch1);

    //onverse la chaine ch2
    j=strlen(ch2)-1;
    i=0;
    while(j!=-1 && i!=strlen(ch2)  && j>i )
    {
        aux=ch2[j];
        ch2[j]=ch2[i];
        aux=ch2[i]=aux;
        j--;
        i++;
    }
    printf("La chaine ch2 est %s \n",ch2);
    return 0;
}
