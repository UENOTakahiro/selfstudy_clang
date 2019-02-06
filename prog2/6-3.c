#include <stdio.h>
#include <stdlib.h>
#include "STACKITEM.h"
#include "STACK.h"

int count = 0;

void generate(int n, int d[]);
   // d[0:n) に非負整数値を入れてくる

void quick(int d[], int l, int r);
// 配列 d[l:r) を昇順に整列する

int main(int argc, char *argv[]){

  int n = atoi(argv[1]);
  int *d;
  d = calloc(n, sizeof(int));
  generate(n, d);

  quick(d, 0, n);

  int count;
  int i;
  for(i=0;i<n;i++){
    if(d[i+1]==d[i]){
      count++;
    } else {
      continue;
    }
  }

  printf("%d\n", count);

  return 0;
}

void quick(int d[], int l, int r){
  int i, j, w, x;
  STACKinit(50); STACKpush((STACKItem){l,r});

  while(STACKcount()>0){
    STACKItem p=STACKpop();
      if( p.l+1>=p.r ) continue;
      w= d[(p.l+p.r)/2]; i= p.l; j= p.r;
      for(; i<j;){
        while( d[i]<w ) i++;
        while( d[j-1]>w ) j--;
        if( i<j ){
          x= d[i]; d[i]= d[j-1]; d[j-1]= x;
          i++; j--;
        }
      }
    STACKpush((STACKItem){i, p.r});
    STACKpush((STACKItem){p.l, j});
  }

  // if( l+1>=r ) return;
  // w= d[(l+r)/2]; i= l; j= r;
  // for(; i<j;){
  //   while( d[i]<w ) i++;
  //   while( d[j-1]>w ) j--;
  //   if( i<j ){
  //     x= d[i]; d[i]= d[j-1]; d[j-1]= x;
  //     i++; j--;
  //   }
  // }
  // quick(d,i,r);
  // quick(d,l,j);
}

void generate(int n,int d[]){int i;srand(100*n+1);int
MASK=0x6EBD7EB;for(i=0;i!=n;i++)d[i]=rand()&MASK;}
