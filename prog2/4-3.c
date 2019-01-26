#include <stdio.h>
#include <stdlib.h>

long int C(int n, int m);
// 二項係数 nCm を計算して返す

void show_results();
long int count = 0;

int main(int argc, char *argv[]){
  // if( argc<3 ){
  //   printf("２引数が必要\n"); exit(-1);
  // }
  int n= atoi(argv[1]), m=atoi(argv[2]);

  if(argc == 3){
    show_results(n, m);
    return 0;
  }

  if(argc == 4){
    int l = atoi(argv[3]);
    int i;
    for(i=m;i<=l;i++){
      show_results(n, i);
    }
  }

  return 0;
}

void show_results(int n, int m){
  long int nCm;
  count = 0;
  nCm= C(n,m);
  printf("C(%d,%d)=%ld ", n, m, nCm);
  printf("[%ld times]\n",count);
}

#define none (-1)
long int C_(int n, int m,
            long int *c[]);
// メモリcを使って二項係数を計算する

long int C(int n, int m){
  long int *c[n+1]; int i, j;
  for(i= 0; i!=n+1; i++){
    c[i]= calloc(i+1,sizeof(long int));
    for(j= 0; j!=i+1; j++)
      c[i][j]= none;
  }
  long int r= C_(n,m,c);
  for(i= 0; i!=n+1; i++) free(c[i]);
  return r;
}

long int C_(int n, int m,
            long int *c[]){
  count++;
  if( c[n][m]!=none ) return c[n][m];
  if( m==0 ) return c[n][m]= 1;
  if( m==n ) return c[n][m]= 1;
  return c[n][m]= C_(n-1,m,c)+C_(n-1,m-1,c);
}
