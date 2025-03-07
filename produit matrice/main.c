
#include <stdio.h>
#include <stdlib.h>
#define max =100

int main()
{
   int M1[2][2];
   int M2[2][2];
   float Mt[2][2];
   int i1,j1;
   int i2,j2;
   int it,jt;
   int s;
/*remplissage des  matrices
    pour la matrice 1*/

   for (i1=0;i1<2;i1++)
   {
     for(j1=0;j1<2;j1++)
     {
       printf("entrez l'element ",i1,j1);
       scanf("%d", &M1[i1][j1]);
     }
   }
   printf ("\n");
    /*pour la matrice 2 */
     for (i2=0;i2<2;i2++)
   {
     for(j2=0;j2<2;j2++)
     {
       printf("entrez l'element ",i2,j2);
       scanf("%d",&M2[i2][j2]);
     }
   }
   system("cls");
   /* les different calculs : multiplication de deux matrice */
    s=0;
   for(i1=0;i1<2;i1++)
   {
     for(j2=0;j2<2;j2++)
     {
      for (it=0,jt=0;it<2,jt<2;it++,jt++)
      {
         s = s+( M1[i1][it] * M2[jt][j2] );
      }
         Mt[it][jt] = s;
     }
   }
  /*affichage du resultat */
         for(it=0;it<2;it++)
          {
              printf("\n");
            for(jt=0;jt<2;jt++)
            {
              printf("%d ",Mt[it][jt] );
            }
          }
    return 0;
}
