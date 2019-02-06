// 整列してある配列
// 二分探索

#include <stdio.h>
#include <stdlib.h>

#include "ITEM.h"
#include "AM.h"

Item *T;
int maxN, N;

void AMinit(int n){
  // 記号表の初期設定、nは格納予定項目
  T = calloc(n, sizeof(Item));
  if(T == NULL){
    printf("記憶領域不足\n"); exit(-1);
  }
  maxN = n; N = 0;
}

int AMcount(){
  // 記号表に登録されている項目数を返す
  return N;
}

void AMinsert(Item item){
  // 項目itemを記号表に登録する
  if(N == maxN){
    printf("表溢れ\n"); exit(-1);
  }
  Key key = key(item);
  int i;
  if( AMsearch(key(item))!=NULL) return;
  for(i=N++;i!=0&&less(key,key(T[i-1])); i--){
    assign(T[i-1], T[i]);
  }
  assign(item, T[i]);
}

Item *AMsearch(Key key){
  // 鍵keyを持つ項目を返す
  // 該当がなければNULLを返す
  int l, r, m;
  for(l=0, r=N; l+1<=r;){
    m=(l+r)/2;
    if(equal(key(T[m]),key)) return (Item*)&T[m];
    if(less(key,key(T[m]))) r=m; else l=m+1;
  }
  return (Item*)NULL;
}

void AMdelete(Item item){
  // 項目itemを記号表から取り除く
  int i;
  for(i=0; i!=N; i++){
    if(equal(key(T[i]), key(item))){
      for(i++;i!N;i++){
        assign(T[i], T[i-1]);
      }
      N--; return;
    }
  }
}
