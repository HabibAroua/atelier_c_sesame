#include <stdio.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct Pile Pile;
struct Pile
{
    Element *premier;
};

int main()
{
    int choix;
    //menu
    do
    {
        do
        {
            printf("______Menu______\n");
            printf("1)Empiler_______\n");
            printf("2)Depiler_______\n");
            printf("3)Quitter_______\n");
            printf("________________\n");
            printf("Donnez votre choix \n");
            scanf("%d",&choix);
        }while((choix<1) || (choix>3) );
    }while(choix!=3);
    return 0;
}
