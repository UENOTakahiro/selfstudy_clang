#include <stdio.h>
#include <stdlib.h>

void generate(int n, int d[]);
   // d[0:n) に非負整数値を入れてくる

void sort(int d[], int n);
// 配列 d[0:n) を昇順に整列する

int main(int argc, char *argv[]){

  int i;
  int n = atoi(argv[1]);
  int *d;
  d = calloc(n, sizeof(int));
  generate(n, d);

  // for(i=0;i<n;i++){
  //   printf("%d\n", d[i]);
  // }

  int num[10000] = {0};

  for(i=0;i<n;i++){
    num[d[i]]++;
  }

  int MAX=0;
  for(i=0;i<10000;i++){
    if(num[i]>MAX){
      MAX = num[i];
    }
  }

  printf("%d:", MAX);

  for(i=0;i<10000;i++){
    if(num[i]==MAX){
      printf(" %04d", i);
    }
  }
  printf("\n");

  return 0;
}

void generate(int n, int d[]){
#define g() rand()/(1.0+RAND_MAX)
int M=10000;int i; srand(100*n+1);int w=
g()*M,k=g()*n,l=g()*n;for(i=0;i!=n;i++)
if(i!=k&&i!=l)d[i]=g()*M;d[k]=d[l]= w;}
