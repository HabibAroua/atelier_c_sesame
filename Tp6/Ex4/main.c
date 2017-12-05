#include <stdio.h>
#include <string.h>

void saisie(char ch[100]);
void chaineentier(char ch[100]);
int estEntier(char ch[100]);

int main()
{
    char ch[100];
    saisie(ch);
    printf("la chaine est %s \n",ch);
    return 0;
}
void saisie(char ch[100])
{

        puts("Donner une chaine ");
        gets(ch);
    printf("%d \n",estEntier(ch));
}

int estEntier(char ch[100])
{
    int i;
    int test;
    for(i=0;i<=strlen(ch);i++)
    {
        if((ch[i]>='0')||(ch[i]<='9'))
        {
            test=1;
        }
        else
        {
            test=0;
            break;
        }
    }

    return test;
}

