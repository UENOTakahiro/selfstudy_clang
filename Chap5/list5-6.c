#include <stdio.h>

int main(void){
  int i;
  int va[5] = {1,2,3,4,5};
  int vb[5];

  for(i=0;i<5;i++){
    vb[i] = va[i];
  }

  for(i=0;i<5;i++){
    printf("%d:%d\n", i, vb[i]);
  }

  return(0);
}
