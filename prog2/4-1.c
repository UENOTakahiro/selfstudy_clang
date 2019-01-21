#include <stdio.h>
#include <stdlib.h>

long int C(int n, int m);
// 二項係数 nCm を計算して返す

long int c_count = 0;

int main(int argc, char *argv[]){
  if( argc!=3 ){
    printf("２引数が必要\n"); exit(-1);
  }
  int n= atoi(argv[1]), m=atoi(argv[2]);
  long int nCm;
  nCm= C(n,m);
  printf("%ld ", nCm);
  printf("[%ld times]\n", c_count);
  return 0;
}

long int C(int n, int m){
  c_count++;
  if( m==0 ) return 1;
  if( m==n ) return 1;
  return C(n-1,m)+C(n-1,m-1);
}
