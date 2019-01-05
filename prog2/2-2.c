#include <stdio.h>
#include <stdlib.h>

int show(int value, int base);
// 非負整数 value の base進表現を
// 必要最少の桁数で標準出力に書き出す
// 書き出した桁数を返す; 2<=base<=64

int main(int argc, char *argv[]){
  if( argc==1 ) return 0;
  int x = atoi(argv[1]);
  if(x<0){printf("usage error\n"); exit(-1);}
  printf("%d@", x);
  int i;
  for(i=2; i!=argc;i++){
    int b = atoi(argv[i]);
    if(b<2 || b>64) continue;
    printf("%d = ", b);
    int k;
    k = show(x, b);
    printf("[%d]", k);
  }
  printf("\n");

  return 0;
}

//----------showの関数定義----------
void show_(int v,int b,int *n){
static char digit[]= "0123456789"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz" "+/";
(*n)++;if( v>=b )show_(v/b,b,n);
putchar(digit[v%b]);}int show(int
value,int base){ int count= 0;show_
(value,base,&count); return count;}
//--------------------------------
