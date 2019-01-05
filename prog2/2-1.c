#include <stdio.h>

void display(int v, int w, int B){
char digit[]= "0123456789ABCDEF";
if( v>=B ) display(v/B,w-1,B);
else while( w-->0 ) putchar(' ');
putchar(digit[v%B]);}

int main(int argc, char *argv[]){
  long long int a, b;
  scanf("%lld %lld", &a, &b);

  int i;
  for(i=a;i<=b;i++){
    display(i, 9, 10);
    display(i, 31, 2);
    display(i, 16, 4);
    display(i, 11, 8);
    display(i, 8, 16);
    printf("\n");
  }

  return 0;

}
