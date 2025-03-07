#include <stdio.h>
#include <string.h>
#include "projet.h"

 ListeLivres *creerLivre(char titre[100], char nom[100], int id, Date d)
 {
     ListeLivres *l = malloc(sizeof(ListeLivres));
     strcpy(l->livre.titre,titre);
     strcpy(l->livre.nom,nom);
     l->date.jour = d.jour;
     l->date.mois = d.mois;
     l->date.annee = d.annee;
     l->livre.id = id;
     l->next = NULL;
     return l;
 }

 ListeLivres *ajouter(ListeLivres *l, char titre[100], char nom[100], int id, Date d)
 {
      ListeLivres *lt = l;
      ListeLivres *new1 = creerLivre(titre, nom, id, d);

      if(l == NULL)
         l = new1;
      else{
         while(lt->next != NULL)
              lt = lt->next;
         lt->next = new1;
      }
    return l;
 }

 ListeLivres *supprimer(ListeLivres *l, int id)
{
    ListeLivres *lt = l;
    ListeLivres *l1 = NULL;
    if(l == NULL)
        printf("impossible liste vide\n");
    if(l != NULL)
    {
        if(l->livre.id == id) //element à supprimer est à l'entete
            {
             l1 = l;
             l = l->next;
             free(l1);
            }
        else
        {
            while(lt->next != NULL && lt->next->livre.id != id)
                  lt = lt->next;
            if(lt->next != NULL)
            {
               l1 = lt->next;
               lt->next = lt->next->next;
               free(l1);
            }
            else
                printf("Livre ayant l'identifiant %d est introuvable\n");
         }
     }
    return l;
}

 ListeLivres *ModifierNom(ListeLivres *l, char nom[100], char nom1[100])
{
    ListeLivres *lt = l;
    while(lt != NULL && strcmp(lt->livre.nom,nom) != 0)
        lt = lt->next;
    if(lt != NULL)
        strcpy(lt->livre.nom,nom1);
    else
        printf("l'auteur %s n'est pas disponible dans cette bibliotheque\n",nom);
    return l;
}

 ListeLivres *ModifierTitre(ListeLivres *l, char titre[100], char titre1[100])
{
    ListeLivres *lt = l;
    while(lt != NULL && strcmp(lt->livre.titre,titre) != 0)
        lt = lt->next;
    if(lt != NULL)
        strcpy(lt->livre.titre,titre1);
    else
        printf("le titre %s n'est pas encore disponible dans cette bibliotheque\n",titre);
    return l;
}

 ListeLivres *ModifierId(ListeLivres *l, int id, int id1)
{
    ListeLivres *lt = l;
    while(lt != NULL && lt->livre.id != id)
        lt = lt->next;
    if(lt != NULL)
        lt->livre.id = id1;
    else
        printf("l'identifiant %d n'est pas encore disponible dans cette bibliotheque\n",id);
    return l;
}

 ListeLivres *ModifierDate(ListeLivres *l,Date d, Date d1)
 {
    ListeLivres *lt = l;
    while((lt != NULL && lt->date.jour != d1.jour) || (lt != NULL && lt->date.mois != d1.mois) || (lt != NULL && lt->date.annee != d1.annee))
        lt = lt->next;
    if(lt != NULL)
      {
        lt->date.jour = d1.jour;
        lt->date.mois = d1.mois;
        lt->date.annee = d1.annee;
       }

    else
        printf("la date %d/%d/%d n'est pas encore disponible dans cette bibliotheque\n",d.jour,d.mois,d.annee);
    return l;
}

int Taille (ListeLivres *l)
 {
    int t = 0;
    ListeLivres *lt = l;
    while(lt != NULL)
    {
      t += 1;
      lt = lt->next;
    }
    return t;
 }


 void Rechercher(ListeLivres *l, int id)
 {
     ListeLivres *lt = l;
     while(lt != NULL && lt->livre.id != id)
        lt = lt->next;
     if(lt != NULL)
        printf("L'indentifiant %d est associe au livre %s disponible \n\n", id,lt->livre.titre);
     else
        printf("l'identifiant id n'est pas associe a un livre\n\n");
 }

 void afficher(ListeLivres *l)
 {
     int i = 1;
     ListeLivres *lt = l;
     if( l == NULL)
        printf("BIBLIOTHEQUE actuellement vide\n\n");
     else
     {
        while(lt != NULL)
            {
              printf("%d. Titre du livre : %s\n",i,lt->livre.titre);
              printf("Nom de l'auteur : %s\n", lt->livre.nom);
              printf("Identifiant du livre : %d\n", lt->livre.id);
              printf("Date de publication : %d/%d/%d\n",lt->date.jour, lt->date.mois, lt->date.annee);
              lt = lt->next;
              i++;
              printf("\n");
            }
     }
 }
