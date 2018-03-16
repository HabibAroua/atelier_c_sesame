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
llist ajouterEnFin(llist liste, int valeur);
void afficherListe(llist liste);
void initializer(llist *liste);
int isEmpty(llust liste);

int main()
{
    llist ma_liste = NULL;
    int i;

    for(i=1;i<=10;i++)
    {
        ma_liste = ajouterEnTete(ma_liste, i);
        ma_liste = ajouterEnFin(ma_liste, i);
    }
    afficherListe(ma_liste);
    initializer(&ma_liste);
    printf("**************\n");
    afficherListe(ma_liste);

    return 0;
}

llist ajouterEnTete(llist liste, int valeur)
{
    element* nouvelElement = malloc(sizeof(element));
    nouvelElement->val = valeur;
    nouvelElement->nxt = liste;
    return nouvelElement;
}

llist ajouterEnFin(llist liste, int valeur)
{
    element* nouvelElement = malloc(sizeof(element));
    nouvelElement->val = valeur;
    nouvelElement->nxt = NULL;

    if(liste == NULL)
    {
        return nouvelElement;
    }
    else
    {
        element* temp=liste;
        while(temp->nxt != NULL)
        {
            temp = temp->nxt;
        }
        temp->nxt = nouvelElement;
        return liste;
    }
}

void afficherListe(llist liste)
{
    element *tmp = liste;
    while(tmp != NULL)
    {
        printf("%d ", tmp->val);
        tmp = tmp->nxt;
    }
}

void initializer(llist *liste)
{
     *liste=NULL;
}

int isEmpty(llust liste)
{
      if(liste==NULL)
      {
            return 1;
      }
      else
      {
            return 0;
      }
}
