#ifndef PROJET_H_INCLUDED
#define PROJET_H_INCLUDED

typedef struct Livre
{
  char titre[30];
  char nom[30];
  int id;
} Livre;

typedef struct Date{
    int jour;
    int mois;
    int annee;
}Date;

 typedef struct ListeLivres
 {
  Livre livre;
  Date date;
  struct ListeLivres *next;
 }ListeLivres;

 ListeLivres *creerLivre(char titre[30], char nom[30], int id, Date d);

 ListeLivres *ajouter(ListeLivres *l, char titre[30], char nom[30], int id, Date d);

 ListeLivres *supprimer(ListeLivres *l, int id);

 ListeLivres *ModifierNom(ListeLivres *l, char nom[30], char nom1[30]);

 ListeLivres *ModifierTitre(ListeLivres *l, char titre[30], char titre1[30]);

 ListeLivres *ModifierId(ListeLivres *l, int id, int id1);

 ListeLivres *ModifierDate(ListeLivres *l, Date d, Date d1);

 int Taille (ListeLivres *l);

 void afficher(ListeLivres *l);


#endif // PROJETUD_H_INCLUDED

