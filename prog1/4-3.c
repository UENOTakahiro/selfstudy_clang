#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  #define fn "data1.txt"
  #define gn "data2.txt"

  // fileを開く
  FILE *f, *g;
  f = fopen(fn, "r");
  g = fopen(gn, "r");

  // エラー処理
  if(f == NULL){
    printf("NG:%s\n", fn);
    exit(-1);
  }
  if(g == NULL){
    printf("NG:%s\n", gn);
    exit(-1);
  }

  // メインの処理
  // 入力した値
  int df, dg;
  // fscanfからの返り値：読めたか読めてないか
  int ef, eg;

  ef = fscanf(f, "%d", &df);
  eg = fscanf(g, "%d", &dg);

  while(ef == 1 && eg == 1){
    if(df == dg){
      printf("%d\n", df);
      ef = fscanf(f, "%d", &df);
      eg = fscanf(g, "%d", &dg);
    } else
      if(df < dg){
        printf("%d\n", df);
        ef = fscanf(f, "%d", &df);
      } else {
        printf("%d\n", dg);
        eg = fscanf(g, "%d", &dg);
      }
  }

  while(ef == 1){
    printf("%d\n", df);
    ef = fscanf(f, "%d", &df);
  }

  while(eg == 1){
    printf("%d\n", dg);
    eg = fscanf(g, "%d", &dg);
  }

  // fileを閉じる
  fclose(f);
  fclose(g);

  return 0;
}
