#include <stdio.h>

int main(void){
  int na, nb;

  scanf("%d %d", &na, &nb);
  printf("商は%d\n", na * nb);
  printf("剰余は%d\n", na % nb);

  return(0);

}
