// 隣接リストを作る
//  入力 1行目 頂点数 n
//  入力 2行目以降 m1 m2
//         (0 <= m1,m2 < n)
//       隣接頂点の対
// 頂点0からの深さ優先探索で
// 全頂点を書き出す

#include <stdio.h>
#include <stdlib.h>

#include "ITEM.h"
// int型に対するもの

typedef
  struct node{
    Item item;
    struct node *next;
  }
LISTnode;

typedef LISTnode *LIST;

LIST create(int m, LIST p){
  LIST q= calloc(1,sizeof(LISTnode));
  assign(m,q->item); q->next= p;
  return q;
}

LIST add(int m, LIST p){
  if( p==NULL ) return create(m,(LIST)NULL);
  if( equal(m,p->item) ) return p;
  if( less(m,p->item) ) return create(m, p);
  else{
    p->next= add(m, p->next); return p;
  }
}

int N;
LIST *adj; int *visited;

void DFS(int node){
  if( visited[node] ) return;
  visited[node]= 1; printf(" %d",node);
  LIST p= adj[node];
  for(; p!=NULL; p= p->next){
    DFS(p->item);
  }
}

int main(int argc, char *argv[]){
  FILE *f;
  if((f = fopen(argv[1],"r")) == NULL){
    fprintf(stderr, "%sのオープンに失敗しました。\n", argv[1]);
    exit(-1);
  }

  int N;
  fscanf(f, "%d", &N);

  int m1, m2;
  adj= calloc(N,sizeof(LIST));
  for(i= 0; i!=N; i++) adj[i]= NULL;
  visited= calloc(N,sizeof(int));
  for(i= 0; i!=N; i++) visited[i]= 0;
  for(; fscanf("%d %d",&m1,&m2)==2;){
    adj[m1]= add(m2,adj[m1]); adj[m2]= add(m1, adj[m2]);
  }
  for(i= 0; i!=N; i++){ LIST p;
    p= adj[i];
    for(; p!=NULL; p= p->next) printf(" %d", p->item);
    printf("\n");
  }
  DFS(0); printf("\n");

  fclose(f);

  return 0;
}
