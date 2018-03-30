#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix;
    do
    {
         do
         {
              printf("__________Menu__________\n");
              printf("1)Enfiler_______________\n");
              printf("2)Defiler_______________\n");
              printf("3)Affichier la file_____\n)");
              printf("4)Quitter_______________\n");
              printf("________________________\n");
              printf("Donner votre choix \n");
              scanf("%d",&choix);
         }while((choix<1)||(choix>4))
    }while(choix!=4);
    return 0;
}
