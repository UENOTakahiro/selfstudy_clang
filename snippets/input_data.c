#include <stdio.h>

int main(void){
  int i, s, n, d;
  
  scanf("%d", &n);

  s = 0;

  for(i=0;i!=n;i++){
    scanf("%d", &d);
    s += d;
  }

  printf("%d\n", s);

  return 0;
}
