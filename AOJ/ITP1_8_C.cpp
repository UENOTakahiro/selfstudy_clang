#include <bits/stdc++.h>
using namespace std;

int main(){
  int counter[26];
  for(int i=0;i<26;i++){
    counter[i] = 0;
  }

  char ch;
  while( cin >> ch ){
    int num = -1;
    if('a'<=ch && ch<='z'){
      num = ch - 'a';
      counter[num]++;
    }
    if('A'<=ch && ch<='Z'){
      num = ch - 'A';
      counter[num]++;
    }
  }

  for(int i=0;i<26;i++){
    printf("%c : %d\n", i+'a', counter[i]);
  }
}
