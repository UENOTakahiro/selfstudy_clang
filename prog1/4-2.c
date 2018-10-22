#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  #define fn "data1.txt"
  #define gn "data2.txt"

  FILE *f, *g;

  f = fopen(fn, "r");
  if(f == NULL){
    printf("NG:%s\n", fn);
    exit(-1);
  }
  g = fopen(gn, "r");
  if(g == NULL){
    printf("NG:%s\n", gn);
    exit(-1);
  }

  char cf, cg;
  while((cf = fgetc(f)) != EOF && (cg = fgetc(g)) != EOF){
    if(cf != cg){
      break;
    }
  }
  if( !(cf == EOF && fgetc(g) == EOF) ){
    printf("different\n");
  }

  fclose(f);
  fclose(g);

  return 0;
}


// 最終的な結果の出力時の条件ch == EOFは必要？
// breakする状況としては、1.cfが先にEOFになる、2.cgが先にEOFになる、3.cfとcgが違う、4.cfとcgが同時にEOF
// の4つがある気がするが、1.の場合は出力必要でgはEOFでないのでfgetc(g)==EOFのみで十分。2.の場合は..。4.もfgetc(g)==EOFのみでOK。3.は出力する場合だけど、、、まぁあったほうがいいのか？
