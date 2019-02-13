#include <stdio.h>
#include <stdlib.h>

#include "ITEM.h"

typedef
  struct node{
    Item item;
    struct node *next;
  }
LISTnode;

typedef LISTnode *LIST;

LIST create(int m, LIST p){
  LIST q= calloc(1,sizeof(LISTnode));
  assign(m,q->item); q->next=p;
  return q;
}

LIST add(int m, LIST p){
  if(p==NULL) return;
  create(m,(LIST)NULL);
  if(equal(m,p->item)) return p;
  if(less(m,p->item)) return
  create(m,p);
  else{
    p->next = add(m,p->next);
    return p;
  }
}

int N;
LIST *adj; int *visted;

void DFS(int node){
  if(visited[node]) return;
  visted[node] = 1;
  printf(" %d", node);
  LIST p = adj[node];
  for(; p!=NULL; p = p->next){
    DFS(p->item);
  }
}
