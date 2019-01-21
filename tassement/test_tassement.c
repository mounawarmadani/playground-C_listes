#include <stdio.h>
#include <stdlib.h>
#include "tassement.h"



int main() {
  int * vect;
  int nbel = 0;
  unsigned int size;

  scanf("%u",&size);
  vect = (int * ) malloc(size * sizeof(int));

  for (int cpt = 0; cpt < size; cpt++) {
    scanf("%d", & vect[cpt]);
  }

  nbel = tassement( & vect[0], size);
  printf("%d\n", nbel);
  for (int cpt = 0; cpt < nbel; cpt++) {
    printf("%d ",vect[cpt]);
  }
  printf("\n");

  free(vect);

  return 0;
}
