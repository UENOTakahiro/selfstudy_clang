#include <stdio.h>
#include <stdlib.h>

int yy = 0;
int xx = 0;

void sort(int d[], int n);
// 配列 d[0:n) を昇順に整列する
int sorted(int d[], int n);
// 配列 d[0:n) が昇順になっているか

void generate(int n, int d[], int op);

int main(int argc, char *argv[]){
  if(argc==1) return 0;
  int n = atoi(argv[1]);
  int m = 0;

  if(argc >= 3){
    m = atoi(argv[2]);
    if(m!=1 && m!=2){
      m = 0;
    }
  }

  int *d;

  d = calloc(n, sizeof(int));
  generate(n, d, m);
  sort(d, n);

  // int k=0;
  // for(k;k<n;k++){
  //   printf("%d\n", d[k]);
  // }

  printf("%d[%d] c:%d s:%d\n", n, m, xx, yy);

  return 0;
}

void quick(int d[], int l, int r);
// 配列 d[l:r) を昇順に整列する

void sort(int d[], int n){
  quick(d,0,n);
}

void quick(int d[], int l, int r){
  int i, j, w, x;
  if( l+1>=r ) return;
  w= d[(l+r)/2]; i= l; j= r;
  for(; i<j;){
    while( d[i]<w ){
      xx++;
      i++;
    }
    xx++;
    while( d[j-1]>w ){
      j--;
      xx++;
    }
    xx++;
    if( i<j ){
      yy++;
      x= d[i]; d[i]= d[j-1]; d[j-1]= x;
      i++;
      j--;
    }
  }
  quick(d,i,r);
  quick(d,l,j);
}

void generate(int n, int d[], int op){
int M=100000;int i; switch(op){case 1:
for(i=0;i!=n;i++)d[i]=i; break;case 2:
for(i=0;i!=n;i++)d[i]=n-i; break;default:
srand(100*n+1);for(i=0;i!=n; i++)d[i]=
(rand()/(RAND_MAX+1.0)-0.5)*2*M; break;}}
