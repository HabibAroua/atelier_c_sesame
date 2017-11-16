#include <stdio.h>
#include<string.h>

int main()
{
   char ch1[50]; char ch2[50]; char chInter1[50]; char chInter2[50];
   char aux;
   int j,i;
    do
    {
        puts("Donner une chaine 1");
        gets(ch1);
        puts("Donner une chaine 2");
        gets(ch2);
    }while((strlen(ch1)%2!=0) && (strlen(ch2)%2!=0));
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
    j=0;
    for (i=strlen(ch1)/2;i<strlen(ch1);i++)
    {
         printf("%c \n",ch1[i]);
         chInter1[j]=ch1[i];
         ch1[i]="";
         j++;
    }
    printf("Afficher chInter1 \n");
    for (i=0;i<strlen(chInter1);i++)
    {
         printf("%c \n",chInter1[i]);
    }
    printf("Afficher ch1 \n");
    for (i=0;i<strlen(ch1);i++)
    {
         printf("%c \n",ch1[i]);
    }
    //********************************************
    for (i=strlen(ch2)/2;i<strlen(ch2);i++)
    {
         printf("%c \n",ch2[i]);
         chInter2[j]=ch2[i];
         ch2[i]="";
         j++;
    }
    //*************************************************
    j=0;
    for (i=strlen(ch1)/2;i<=strlen(ch1);i++)
    {
         ch1[i]=chInter2[j];
         j++;
    }
    printf("La chaine modifier est %s \n",ch1);

    return 0;
}
