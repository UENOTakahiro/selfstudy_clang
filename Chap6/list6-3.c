#include <stdio.h>

int sqr(int x){
  return(x * x);
}

int diff(int x, int y){
  return(x > y ? x - y : y - x);
}

int main(void){
  int kx, ky;

  scanf("%d", &kx);
  scanf("%d", &ky);

  printf("2つの値の二乗の差は%dです\n", diff(sqr(kx),sqr(ky)));

  return(0);
}
