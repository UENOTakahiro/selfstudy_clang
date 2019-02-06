#include <stdio.h>
#include <stdlib.h>

int count = 0;

void generate(int n, int d[]);
   // d[0:n) に非負整数値を入れてくる


int main(int argc, char *argv[]){

  int n = atoi(argv[1]);
  int *d;
  d = calloc(n, sizeof(int));
  generate(n, d);

  char num[10000001] = {0};

  int i;
  for(i=0;i<n;i++){
    if(num[d[i]]=='1'){
      count++;
    }
    num[d[i]]='1';
  }

  printf("%d\n", count);

  return 0;
}

void generate(int n, int d[]){int M=10000000;int
i;srand(100*n+1);for(i=0;i!=n;i++)d[i]=rand()/(RAND_MAX+1.0)*M;}
