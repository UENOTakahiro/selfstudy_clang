#include <stdio.h>

int main(int argc, char *argv[]){
  #define LINESIZE 100
  char line[LINESIZE];
  int h, m; char b, io;
  int tm;

  for(tm=0;fgets(line, LINESIZE, stdin)!=NULL;){
    sscanf(line, "%c %c %2d:%2d\n", &b, &io, &h, &m);
    switch(io){
      case 'I': tm += 60*h+m; break;
      case 'O': tm -= 60*h+m; break;
    }
  }
  printf("%d:%02d\n", tm/60, tm%60);

  return 0;
}
