#include <stdio.h>

int main(void){
  int s, d;

  s = 0;

  for(; scanf("%d", &d)==1;){
    s += d;
  }
  printf("%d\n", s);

  return 0;
}
