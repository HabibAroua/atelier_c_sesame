#include <stdio.h>
#include <stdlib.h>

typedef struct element element;
struct element
{
    int val;
    struct element *nxt;
};

typedef element* llist;
llist ajouterEnTete(llist liste, int valeur);

int main()
{
    /* Déclarons 3 listes chaînées de façons différentes mais équivalentes */
    llist ma_liste1 = NULL;
    element *ma_liste2 = NULL;
    struct element *ma_liste3 = NULL;

    return 0;
}

llist ajouterEnTete(llist liste, int valeur)
{
    element* nouvelElement = malloc(sizeof(element));
    nouvelElement->val = valeur;
    nouvelElement->nxt = liste;
    return nouvelElement;
}
