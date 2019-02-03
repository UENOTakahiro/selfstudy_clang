#include <stdio.h>
#include <stdlib.h>

void sort(int d[], int n);
// 配列 d[0:n) を昇順に整列する
int sorted(int d[], int n);
// 配列 d[0:n) が昇順になっているか

int x = 0;

void generate(int n, int d[], int op){
int M=100000;int i;switch(op){case 1:
for(i=0;i!=n;i++)d[i]=i; break;case 2:
for(i=0;i!=n;i++)d[i]=n-i; break;default:
srand(100*n+1);for(i=0;i!=n; i++)d[i]=
(rand()/(RAND_MAX+1.0)-0.5)*2*M;break;}}

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

  d= calloc(n, sizeof(int));
  generate(n, d, m);
  sort(d,n);
  printf("%d[%d] %d\n", n, m, x);

  return 0;
}

void slipdown(int p, int d[], int n);
// d[p+1:n) がヒープのとき、
// d[p]を必要なだけ降格させて d[p:n) をヒープに仕立てる

void sort(int d[], int n){
  // ヒープ整列法 heap sort
  int i, m; int w;
  for(i= n/2; i!=0; i--) slipdown(i, d,n);
  for(m= n; m!=0; m--){
    slipdown(0, d,m);
    w= d[0]; d[0]= d[m-1]; d[m-1]= w;
  }
}

void slipdown(int p, int d[], int n){
  int w= d[p], q;
  for(q= 2*p+1; q<n; q= 2*p+1){
	if( q+1<n && d[q]<d[q+1] ) q++;
    if( w>=d[q] ) break;
    d[p]= d[q]; p= q; x++;
  }
  d[p]= w; x++;
}

int sorted(int d[], int n){
  int i;
  for(i= 1; i!=n; i++)
    if( d[i-1]>d[i] ) return 0;
  return 1;
}
