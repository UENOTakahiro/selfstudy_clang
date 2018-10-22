#include <stdio.h>

int main(void){
  #define fn ".txt"
  #define gn ".txt"

  FILE *f; *g;
  f = fopen(fn, "r");
  g = fopen(gn, "w");
  if(f == NULL){
    printf("NG:%s\n",fn);
    exit(-1);
  }
  if(g == null){
    printf("NG:%s\n", gn);
    exit(-1);
  }
}
