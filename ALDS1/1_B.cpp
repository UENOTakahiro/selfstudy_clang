#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
  if(x < y){
    int k = y;
    y = x;
    x = k;
  }
  while(y > 0){
    int r = x % y;
    x = y;
    y = r;
  }
  return x;
}

int main(){
  int x, y;
  cin >> x >> y;

  cout << gcd(x, y) << endl;
}
