#include <stdio.h>

int main(void){
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  int max = a;
  if(max < b){
    max = b;
  }
  if(max < c){
    max = c;
  }
  printf("Mas is %d\n", max);

  return(0);
}
