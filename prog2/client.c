#include <stdio.h>
#include <stdlib.h>
#include "ITEM.h"
#include "AM.h"
#define SIZE 100

int main(int argc, char *argv[]){
  int d, n;
  char line[SIZE]; char op;
  Item *p;

  AMinit(1000000);
  printf("::%d\n", AMcount());
  for(;fputs("> ",stdout), fgets(line,SIZE,stdin)!=NULL;){
    if(sscanf(line,"%d%c", &d, &op)==EOF) break;
    switch(op){
      case '+': AMinsert((Item)d); break;
      case '-': AMdelete((Item)d); break;
      default: p = AMsearch(key(d));
        if(p != NULL){
          printf(":[%d]", *p); break;
        }
    }
    n = AMcount();
    printf("::%d\n", n);
  }

  return 0;
}
