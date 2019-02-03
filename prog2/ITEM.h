// 連想記憶などを使うときのデータ型

typedef int Key;
  // 探索の鍵
typedef int Item;
  // 情報データ
#define key(item) item
#define less(key1, key2) (key1<key2)
#define equal(key1, key2) (key1==key2)
#define assign(value, item) (item= value)
