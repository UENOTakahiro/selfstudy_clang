#include <stdio.h>
#include <stdlib.h>
#include "ITEM.h"
#include "AM.h"

int count = 0;

void generate(int n, int d[]);
   // d[0:n) に非負整数値を入れてくる

int main(int argc, char *argv[]){

  int n = atoi(argv[1]);
  int *d;
  d = calloc(n, sizeof(int));
  generate(n, d);

  // int i;
  // for(i=0;i<n;i++){
  //   printf("%d\n", d[i]);
  // }

  AMinit(n);
  int k;
  for(k=0;k<n;k++){
    if(AMsearch(d[k])==NULL){
      AMinsert(d[k]);
    } else {
      count++;
    }
  }

  printf("%d\n", count);

  return 0;
}

void generate(int n, int d[]){int i; srand(100*n+1);int MASK
= 0x6EBD6EB;for(i= 0; i!=n; i++)d[i]= rand()&MASK;}
