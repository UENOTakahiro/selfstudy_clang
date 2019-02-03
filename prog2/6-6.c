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
typedef struct node  *BinTree;

int N;
BinTree Root;

void AMinit(int n){
// 連想記憶の初期設定,nは格納予定項目数
  N= 0;
  Root= NULL;
}

int  AMcount(){
// 連想記憶に登録されている項目数を返す
  return N;
}

BinTree create(Item item){
  BinTree r= (BinTree)calloc(1,sizeof(Node));
  r->left= r->right= NULL;
  assign(item, r->item);
  N++;
  return r;
}

BinTree insert(Item item, BinTree r){
  if( r==NULL ) return create(item);
  if( less(key(item),key(r->item)) )
    r->left= insert(item, r->left);
  else
    r->right= insert(item, r->right);
  return r;
}

void AMinsert(Item item){
// 項目itemを連想記憶に登録する
  if( AMsearch(key(item))!=NULL )
    return;
  Root= insert(item, Root);
}

Item *search(Key key, BinTree r){
  if( r==NULL ) return NULL;
  if( equal(key(r->item),key) ) return &(r->item);
  if( less(key,key(r->item)) )
    return search(key,r->left);
  else
    return search(key,r->right);
}

Item *AMsearch(Key key){
// 鍵keyを持つ項目を返す、
// 該当がなければ NULL を返す
  return search(key, Root);
}

BinTree combine(BinTree ln, BinTree rn){
  if( rn==NULL ) return ln;
  if( rn->left==NULL ){
    rn->left= ln; return rn;
  }
  BinTree rnl= rn->left;
  rn->left= rnl->right; rnl->right= rn;
  return combine(ln,rnl);
}

BinTree delete(Item item, BinTree r){
  if( r==NULL ) return (BinTree)NULL;
  if( equal(key(r->item),key(item)) ){
    if( r->left==NULL ) return r->right;
    if( r->right==NULL )return r->left;
    BinTree ln= r->left, rn= r->right;
    free(r);
    return combine(ln,rn);
  }
  if( less(key(item), key(r->item)) )
    r->left= delete(item, r->left);
  else
    r->right= delete(item, r->right);
  return r;
}

void AMdelete(Item item){
// 項目itemを連想記憶≈から取り除く
  Root= delete(item, Root);
  N--;
}
