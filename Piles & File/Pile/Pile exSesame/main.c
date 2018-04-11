#include <stdio.h>

typedef float TypeDonnee;
typedef struct
{
    int nb_elem; /* nombre d’éléments dans la pile */
    int nb_elem_max; /* capacité de la pile */
    TypeDonnee *tab; /* tableau contenant les éléments */
}Pile;

int main()
{
    //waiting the course
    return 0;
}

Pile Initialiser(int nb_max)
{
    Pile pilevide;
    pilevide.nb_elem = 0; /* la pile est vide */
    pilevide.nb_elem_max = nb_max; /* capacité nb_max */
    /* allocation des éléments : */
    pilevide.tab = (TypeDonnee*)malloc(nb_max*sizeof(TypeDonnee));
    return pilevide;
}

int EstVide(Pile P)
{
    /* retourne 1 si le nombre d’éléments vaut 0 */
    return (P.nb_elem == 0) ? 1 : 0;
}
