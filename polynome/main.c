#include <stdio.h>
#include <stdlib.h>

//definir la structure polynome
typedef struct{
int coef;
int exp;
}monome;

typedef struct{
monome m;
struct polynome *suivant;
}polynome;


//rajoute un polynome
/*polynome *ajoute(int coef, int exp, polynome *p){
    polynome *p1;
    p1 = malloc(sizeof(polynome));
    p1->m.coef = coef;
    p1->m.exp = exp;

    if(p == NULL){
      p = p1;
      p1->suivant = NULL;
    }
    else{
      p1->suivant = p;
      p = p1;
    }
    return p;
}*/

void ajoute(polynome **p, int coef, int expo){
polynome *p1 = malloc(sizeof(polynome));
polynome *p2 = *p;
p1->m.coef = coef;
p1->m.exp = expo;

if(*p == NULL){
    *p = p1;
     p1->suivant = NULL;
}
else{
    if((*p)->m.exp < expo){
       p1->suivant = (*p);
       (*p) = p1;
    }
    else{
            polynome *pt = p2->suivant;
        while(p2->suivant != NULL && pt->m.exp > expo)
              p2 = pt;
        if(p2->suivant != NULL && pt->m.exp == expo)
            pt->m.coef += coef;
        else{
            p1->suivant = p2->suivant;
            p2->suivant = p1;
        }
    }
}
}

//destuction d'un polynom
polynome * destruction(polynome *p){
   polynome *p1 ;
  if(p == NULL)
     printf("liste vide donc impossible de detruire");
     while(p != NULL){
          p1 = p;
          p = p->suivant;
          p1->suivant = NULL;
          free(p1);
      }
      return p;
   // printf("polynome destruit");
   }

//addition
polynome * add(polynome *p2, polynome *p1){
    polynome *p;
    p = p1;

    while(p2 != NULL){
        ajoute(&p, p2->m.coef, p2->m.exp);
        p2 = p2->suivant;
    }
return p;
}

void affiche(polynome *p){
    while(p != NULL){
          printf("%d - %d --> ",p->m.coef,p->m.exp);
          p = p->suivant;
    }
    printf("NULL");
}

int main()
{
   polynome *po = NULL;
   polynome *p;
   polynome *p1=NULL;

   ajoute(&po,3,5);
   ajoute(&po,8,7);
   ajoute(&po,1,4);
   ajoute(&p1,1,7);
   ajoute(&p1,2,4);
   printf("le premier poly est: ");
   affiche(po);
   printf("\nle deuxieme poly est: ");
   affiche(p1);
  // po = destruction(po);
  // printf("\napres destruction on obtient : ");
   //affiche(po);
   printf("\nla somme des 2 polynome est : ");
   p = add(p1,po);
   affiche(p);


   return 0;
}
