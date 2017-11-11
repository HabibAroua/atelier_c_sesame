#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float p=0;float va=0;
/*procedure d acquisition*/
void aquisition()
{p=0;
    printf ("ce programme affiche une valeur approch de pie/4 \n quel niveau de precision desirez vous?\n choisiser un  niveau de precision   ");
    scanf ("%f",&p);

}

double calcul(float n)
/*fonction de calcul de l aproxcimation*/
{{


       n=0;
    while (n<p)
       {

        va=va +(pow(-1.0,n)/((2.0*n)+1) );
    n ++;
       }}
        return va;
}
void affichage()
/*procedure  affichage*/
{

    printf("\n la valeur approchee de pie/4 avec un niveau de precision de %.0f est %.21lf",p, calcul(p) );

}
int main()
{
    aquisition();
    affichage();

    return 0;
}
