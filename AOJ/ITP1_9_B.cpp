#include <bits/stdc++.h>
using namespace std;

int main(){
  string n;
  do {
    cin >> n;

    int m;
    cin >> m;

    int h[m];
    for(int i=0;i<m;i++){
      h[i] = 0;
    }

    for(int i=0;i<m;i++){
      cin >> h[i];
    }

    // シャッフルの処理
    for(int i=0;i<m;i++){
      n.insert(n.size(), n.substr(0,h[i]));
      n.erase(0, h[i]);
    }
    if(n != "-"){
      cout << n << endl;
    }
  } while(n != "-");
}
