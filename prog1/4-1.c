#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  #define fn "data1.txt"

  FILE *f;
  f = fopen(fn, "r");

  if(f == NULL){
    printf("NG:%s\n", fn);
    exit(-1);
  }

  int ch;
  while( (ch=fgetc(f)) != EOF){
    fputc(ch, stdout);
  }

  fclose(f);

  return 0;
}
