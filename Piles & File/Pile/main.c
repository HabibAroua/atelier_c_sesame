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
void empiler(Pile *pile, int nvNombre);
int depiler(Pile *pile);

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
            switch(choix)
            {
                 case 1 : printf("Empiler \n");
                 break;
                 case 2 : printf("Depiler \n");
                 break;
                 case 3 : printf("Vous quittez l'application \n");
                 break ;
            }
        }while((choix<1) || (choix>3) );
    }while(choix!=3);
    return 0;
}

void empiler(Pile *pile, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}

int depiler(Pile *pile)
{
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int nombreDepile = 0;
    Element *elementDepile = pile->premier;

    if (pile != NULL && pile->premier != NULL)
    {
        nombreDepile = elementDepile->nombre;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }

    return nombreDepile;
}
