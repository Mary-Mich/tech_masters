#include <stdio.h>
#include <string.h>
#include "projet.h"

void menu(ListeLivres *livre){
    int choix,nombre;
    char titre[100];
    char nom[100];
    int id;
    Date d;
    Date d1;
    char titre1[100];
    char nom1[100];
    int id1;

    printf("NOS DIFFERENTS SERVICES\n");
    printf("1. Ajouter des livre?\n");
    printf("2. Retirer des livre?\n");
    printf("3. Modifier les informations d'un livre?\n");
    printf("4. Afficher tous les livres?\n");
    printf("5. Connaitre le nombre de livre de la bibliotheque?\n");
    printf("6. Rechercher un livre?\n");
    printf("7. Quitter!\n\n");
    printf(">>entre un choix svp : ");
    scanf("%d",&choix);

    switch (choix)
    {
      case 1 :
           printf("Combien de livre voulez vous ajouter ??  ");
           scanf("%d",&nombre);
           for(int i=0; i<nombre; i++)
            {
               printf(">>entrer le titre du livre : ");
               scanf("%s",titre);
               printf(">>entrer l'auteur de ce livre : ");
               scanf("%s",nom);
               printf(">>entrer le jour de publication : ");
               scanf("%d",&d.jour);
               printf(">>enter le mois de publication : ");
               scanf("%d",&d.mois);
               printf(">>enter l'annee de publication : ");
               scanf("%d",&d.annee);
               printf(">>entrer son identifiant : ");
               scanf("%d",&id);
               livre = ajouter(livre,titre,nom,id,d);
               printf("Bravo,Vous venez d'ajouter un livre.\n\n");
            }
               menu(livre);
      break;
      case 2 :
              printf("Combien de livre souhaitez vous retiter ? : ");
              scanf("%d",&nombre);
              if(nombre > 1)
               {
                 for(int i = 0; i<nombre; i++)
                  {
                   printf("entrer l'identifiant du livre a supprimer : ");
                   scanf("%d",&id);
                   livre = supprimer(livre,id);
                   printf("Bravo,vous venez de retirer un livre!!!\n\n");
                   }
                }
                else if(nombre == 1)
                 {
                   printf("entrer l'identifiant du livre!");
                   scanf("%d",&id);
                   livre = supprimer(livre,id);
                   printf("Bravo,vous venez de retirer un livre!!!\n\n");
                 }
                 else
                   printf("pourquoi entrer 0 ?? C'est une blague de mauvaise gout.\n\n");
                menu(livre);
       break;
       case 3 :
               printf("quel information souhaitez-vous modifier ?\n");
               printf("1. Titre du livre?\n");
               printf("2. L'auteur du livre?\n");
               printf("3. L'identifiant du livre?\n");
               printf("4. La date de publication?\n");
               printf(">>entre un choix svp : ");
               scanf("%d",&choix);

               if(choix == 1)
               {
                  printf(">>entrer le titre du livre a modifier : ");
                  scanf("%s",titre);
                  printf(">>entrer le titre remplacant : ");
                  scanf("%s",titre1);
                  livre = ModifierTitre(livre,titre,titre1);
                  printf("Bravo,vous venez de modifier le titre d'un livre\n\n");
               }
               else if(choix == 2)
               {
                  printf(">>entrer l'auteur du livre a modifier : ");
                  scanf("%s",nom);
                  printf(">>entrer le nom de l'auteur remplacant : ");
                  scanf("%s",nom1);
                  livre = ModifierTitre(livre,nom,nom1);
                  printf("Bravo,vous venez de modifier l'auteur d'un livre\n\n");
               }
               else if(choix == 3)
               {
                  printf(">>entrer l'identifiant du livre à modifier : ");
                  scanf("%d",&id);
                  printf(">>entrer l'identifiant remplacant : ");
                  scanf("%d",&id1);
                  livre = ModifierId(livre,id,id1);
                  printf("Bravo,vous venez de modifier l'identifiant d'un livre\n\n");

               }
               else if(choix == 4)
                {
                  printf(">>entrer la date du livre à modifier : ");
                  scanf("%d/%d/%d",&d.jour,&d.mois,&d.annee);
                  printf(">>entrer la date remplacante : ");
                  scanf("%d/%d/%d",&d1.jour, &d1.mois, &d1.annee);
                  livre = ModifierDate(livre,d,d1);
                  printf("Bravo,vous venez de modifier la date de publication d'un livre\n\n");
                }
               else
                printf("choix indisponible");
            menu(livre);
        break;
        case 4 :
                printf("Les livres disponibles dans cette bibliotheque sont:\n");
                afficher(livre);
                menu(livre);
        break;
        case 5 :
                int t = Taille(livre);
                printf("Cette bibliotheque contient %d livre(s)\n\n",t);
                menu(livre);

         break;
         case 6 :
                 printf(">>entrer l'identifiant du livre a rechercher : ");
                 scanf("%d",&id);
                 livre = Rechercher(livre,id);
                 menu(livre);
         break;
         case 7 :
                 printf("Merci pour votre participation a tres bientot !!!\n\n");
                 exit(0);
         break;
         default :
                  printf("choix non autoriser\n\n");
                  menu(livre);
     }

 }

