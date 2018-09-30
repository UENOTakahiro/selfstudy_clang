#include <stdio.h>

int main(void){
  int n;

  scanf("%d", &n);
  if(n%5!=0){
    printf("5で割り切れません\n");
  }
  return(0);
}
