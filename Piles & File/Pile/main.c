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
    printf("______Menu______\n");
    printf("1)Empiler_______\n");
    printf("2)Depiler_______\n");
    printf("3)Quitter_______\n");
    printf("________________\n");
    return 0;
}
