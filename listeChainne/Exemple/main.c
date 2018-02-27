#include <stdio.h>
#include <stdlib.h>

struct Maillon
{
   int valeur;
   struct Maillon *suivant;
};
typedef struct Maillon ListeEntier;
ListeEntier *L ;
void ListeVide(ListeEntier *L);
int main()
{


    return 0;
}

void ListeVide(ListeEntier *L)
{
}
