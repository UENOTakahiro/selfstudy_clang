#include <stdio.h>
#include <stdlib.h>

int pair(int x,int d[],int n);
// 配列 d[0:n) が昇順になっているとき
// x=d[i]+d[j] である対 (i,j)（0<=i,j<n) が
// 何組あるかを返す

int compare(const void *x, const void *y){
  return *(int *)x - *(int *)y ;
}
// ライブラリの関数 qsort に提供する

void generate(int n, int d[]);
// 大きさ n の配列 d に乱数を埋める
// 同一の値は2度以上現れることがない


int main(int argc, char *argv[]){

  if(argc==1) return 0;
  int n = atoi(argv[1]);

  int *num;
  num = calloc(10, sizeof(int));
  int k;
  for(k=0;k<=argc-2;k++){
    num[k] = atoi(argv[k+2]);
  }

  int *d;

  d= calloc(n, sizeof(int));
  generate(n, d);

  qsort((void *)d, (size_t)n, sizeof(int), compare);

  int num_pair[argc-2];
  int l;
  for(l=0;l<num_pair.length;l++){
    num_pair[l] = pair(num[l], d, )
  }

  int i;
  for(i=0; i<=argc-2;i++){
    printf("%d: %d", num[i], c);
  }

  return 0;
}

int pair(int x,int d[],int n){
  int i, j;
  int c;
  c= 0;
  for(i= 0, j= n-1;i<j;){
    if( x==d[i]+d[j] ){
      c++; i++; j--; continue; }
    if( x>d[i]+d[j] )
      i++; else j--;
  }
  return c;
}

void generate(int n, int d[]){char *w= calloc(2*n,sizeof(char));
int i; srand(n);for(i= 0; i!=n; i++){do{
double r= rand()/(RAND_MAX+1.0)-0.5;d[i]= r*2*n;}
while( w[d[i]+n]++!=0 );  }  free(w);}
