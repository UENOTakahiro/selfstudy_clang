// 二分探索木

#include <stdio.h>
#include <stdlib.h>

#include "ITEM.h"
#include "AM.h"

typedef
  struct node{
    Item item;
    struct node *left, *right;
  }
Node;
typedef struct node *Bintree;

int N;
BinTree Root;

void AMinit(int n){
  // 連想記憶の初期設定、nは格納予定項目数
  N = 0;
  Root = NULL;
}

int AMcount(){
  // 連想記憶に登録されている項目数を返す
  return N;
}

BinTree create(Item item){
  BinTree r = (Bintree)calloc(1, sizeof(Node));
  r->left = r-> right = NULL;
  assign(item, r->item);
  N++;
  return r;
}
BinTree insert(Item item, BinTree r){
  if(r==NULL) return create(item);
  if( less(key(item),key(r->item))){
    r->left = insert(item, r->left);
  } else {
    r->right = insert(item, r->right);
  }
  return r;
}

void AMinsert(Item item){
  if( AMsearch(key(item))!=NULL){
    return;
  }
  Root = insert(item, Root);
}
