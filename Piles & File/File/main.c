#include <stdio.h>
#include <stdlib.h>

int main()
{
    typedef struct Element Element;
    struct Element
    {
        int nombre;
        Element *suivant;
    };

    typedef struct File File;
    struct File
    {
          Element *premier;
    };

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
              switch(choix)
              {
                  case 1 : printf("Emfiler \n");
                  break;
                  case 2 : printf("Defiler \n");
                  break;
                  case 3 : printf("Afficher \n");
                  break;
                  case 4 : printf("Vous quittez l'application \n");
                  break;
                  default : printf("Choix invalide \n");
                  break;
              }
         }while((choix<1)||(choix>4));
    }while(choix!=4);
    return 0;
}
