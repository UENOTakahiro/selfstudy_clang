#include <stdio.h>

int gcd(int x, int y){
  if(x < y){
    int k = y;
    y = x;
    x = k;
  }
  while(y > 0){
    int r = x % y;
    x = y;
    y = r;
  }
  return x;
}

int main(int argc, char *argv[]){
  int x, y;
  scanf("%d %d", &x, &y);

  printf("%d\n", gcd(x,y));

  return 0;
}
