#include <cstdio>

int main(){
  int x, y;
  int *p;

  p = &x;
  printf("%p\n", p);

  *p = 8;
  y = *p + x;

  printf("%d\n", y);

  return 0;
}
