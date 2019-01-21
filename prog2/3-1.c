#include <stdio.h>
#include <stdlib.h>

//---------- f の関数定義----------
long int f(int x){long int r= 1;while(x!=0)r*=x--;return r;}
//--------------------------------

int main(int argc, char *argv[]){
  long int x;
  x = atoi(argv[1]);
  printf("%ld! = %ld\n", x, f(x));

  return 0;
}
