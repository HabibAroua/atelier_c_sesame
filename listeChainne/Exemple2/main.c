#include <stdio.h>
#include <stdlib.h>

typedef struct element element;
struct element
{
    int val;
    struct element *nxt;
};

typedef element* llist;

int main()
{
    /* Déclarons 3 listes chaînées de façons différentes mais équivalentes */
    llist ma_liste1 = NULL;
    element *ma_liste2 = NULL;
    struct element *ma_liste3 = NULL;

    return 0;
}
