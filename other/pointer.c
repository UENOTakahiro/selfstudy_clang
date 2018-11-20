#include <stdio.h>

int main(void){
  int hoge;
  int *p_piyo;

  hoge = 10;
  p_piyo = &hoge;

  printf("hoge address :%p\n", &hoge);
  printf("hoge :%d\n", hoge);
  printf("p_piyo :%p\n", p_piyo);
  printf("*p_piyo :%d\n", *p_piyo);
  printf("p_piyo address :%p\n", &p_piyo);
}
