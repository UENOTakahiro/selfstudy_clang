#include <stdio.h>
#include <stdlib.h>

long int f(int n){ // n! 反復形（関数定義は自分で与えよ）
  long int r= 1;while(n!=0)r*=n--;return r;}

long int f_fn(int n){// n! 再帰形
  if( n<2 ) return 1; return f_fn(n-1)*n;}

long int g(int n){// n!! 再帰形
  if( n<2 ) return 1; return n*g(n-2);}

long int f_gg(int n){ //n! ( n!! を適用 )
  if( n<2 ) return 1; return g(n)*g(n-1);}

void show_results();

int main(int argc, char *argv[]){
  if( argc==1 ) return 0;
  int n = atoi(argv[1]);

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
  printf("%d! = %ld ", n, f(n));
  if(f(n)==f_fn(n)){
    printf("f*n:. ");
  } else {
    printf("%ld ", f_fn(n));
  }
  if(f(n)==f_gg(n)){
    printf("g*g:.\n");
  } else {
    printf("%ld\n", f_gg(n));
  }
}
