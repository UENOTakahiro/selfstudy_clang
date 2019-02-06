// 連想記憶 associative memory

void AMinit(int n);
// 連想記憶の初期設定, nは格納予定項目数

int AMcount();
// 連想記憶に登録されている項目数を返す
void AMinsert(Item item);
// 項目itemを連想記憶に登録する

Item *AMsearch(Key key);
// 鍵keyを持つ項目を指すポインタを返す
// 該当がなければNULLを返す

void AMdelete(Item item);
// 項目itemを連想記憶から取り除く
