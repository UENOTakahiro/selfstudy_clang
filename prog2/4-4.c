#include <stdio.h>
#include <stdlib.h>

long int f(int n);
// n>=0 に対して
// n番目のフィボナッチ数を計算して返す

void show_results();
long int count = 0;

int main(int argc, char *argv[]){
  if( argc==1 ) return 0;
  int n= atoi(argv[1]);

  if(argc == 2){
    show_results(n);
    return 0;
  }

  if(argc == 3){
    int m = atoi(argv[2]);
    int i;
    for(i=n;i<=m;i++){
      show_results(i);
    }
  }
  return 0;
}

void show_results(int n){
  count = 0;
  long int fib;
  fib= f(n);
  printf("f(%d)=%ld ", n,fib);
  printf("[%ld times]\n",count);
}

#define none (-1)
long int f_(int n, long int F[]);
// メモ F を使った計算

long int f(int n){
  int i; long int r;
  long int F[n+1];
  for(i= 0; i!=n+1; i++)
    F[i]= none;
  r= f_(n,F);
  return r;
}

long int f_(int n, long int F[]){
  count++;
  if( F[n]!=none ) return F[n];
  if( n<=1 ) return F[n]= n;
  return F[n]= f_(n-1,F)+f_(n-2,F);
}
