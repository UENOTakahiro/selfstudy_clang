#include <stdio.h>
#include <stdlib.h>

long int f(int n);
// n>=0 に対して
// n番目のフィボナッチ数を計算して返す

long int count = 0;

int main(int argc, char *argv[]){
  if( argc==1 ) return 0;
  int n= atoi(argv[1]);
  long int fib;
  fib= f(n);
  printf("%ld ", fib);
  printf("[%ld times]\n",count);
  return 0;
}

long int f(int n){
  count++;
  if( n<=1 ) return n;
  return f(n-1)+f(n-2);
}
