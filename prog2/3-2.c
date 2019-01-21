#include <stdio.h>
#include <stdlib.h>

//----------showの関数定義----------
void show(int value){ printf("%d\n",value);}
//--------------------------------

int main(int argc, char *argv[]){
  int x;
  x = atoi(argv[1]);
  show(x);

  return 0;
}
