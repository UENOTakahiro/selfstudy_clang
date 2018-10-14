#include <stdio.h>

int max3(int x, int y, int z){
  int max = x;

  if(y > max) max = y;
  if(z > max) max = z;
  return(max);
}

int main(void){
  int na, nb, nc;

  scanf("%d", &na);
  scanf("%d", &nb);
  scanf("%d", &nc);

  printf("最も大きい値は%dです\n", max3(na,nb,nc));

  return(0);
}
