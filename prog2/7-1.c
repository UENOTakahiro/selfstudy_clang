#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  FILE *f;
  if((f = fopen(argv[1],"r")) == NULL){
    fprintf(stderr, "%sのオープンに失敗しました。\n", argv[1]);
    exit(-1);
  }

  int n;
  fscanf(f, "%d", &n);

  int num[n][n];

  int i, j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      num[i][j] = 0;
    }
  }


  int k;
  int x, y;
  for(k=0;fscanf(f, "%d %d", &x, &y)==2;k++){
    num[x][y] = 1;
    num[y][x] = 1;
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf(" %d", num[i][j]);
    }
    printf("\n");
  }

  fclose(f);

  return 0;
}
