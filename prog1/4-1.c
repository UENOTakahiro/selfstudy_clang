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

  // fgetc, fputcは一文字単位での読み書き
  // fgetc:一文字読む, ファイル終端はEOFを返す
  // fputc:第一引数を第二引数に書き出す
  int ch;
  while( (ch=fgetc(f)) != EOF){
    fputc(ch, stdout);
  }

  fclose(f);

  return 0;
}
