#include <stdio.h>

int main(void){
  int i;
  int vc[5];

  for(i = 0; i < 5; i++){
    vc[i] = i + 1;
  }

  for(i = 0; i < 5; i++){
    printf("%d:%d\n", i+1, vc[i]);
  }

  return(0);
}
