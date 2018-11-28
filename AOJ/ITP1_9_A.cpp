#include <bits/stdc++.h>
using namespace std;

int main(){
  string W;
  cin >> W;

  for(int i=0;i<W.size();i++){
    W[i] = toupper(W[i]);
  }
  string T = "";

  int counter = 0;
  while (T != "END_OF_TEXT") {
    cin >> T;
    for(int i=0;i<T.size();i++){
      if(T != "end_of_text"){
        T[i] = toupper(T[i]);
      }
    }

    if(T == W){
      counter++;
    }
  }
  cout << counter << endl;
}
