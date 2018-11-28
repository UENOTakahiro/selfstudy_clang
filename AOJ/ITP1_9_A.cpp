#include <bits/stdc++.h>
using namespace std;

int main(){
  string W;
  cin >> W;

  for(int i=0;i<W.size();i++){
    W[i] = toupper(W[i]);
  }
  string T = "";
  string T2 = "";

  int counter = 0;
  while (T2 != "END_OF_TEXT") {
    cin >> T;
    T2 = T;
    for(int i=0;i<T.size();i++){
        T[i] = toupper(T[i]);
    }

    if(T == W){
      counter++;
    }
  }
  cout << counter << endl;
}
