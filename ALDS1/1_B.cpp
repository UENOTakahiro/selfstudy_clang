#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){
  int n = 0;
  if(x > y){
    n = y;
  } else {
    n = x;
  }
  for(int i=n;i>=1;i--){
    if(x%i==0 && y%i==0){
      return i;
      break;
    }
  }
}

int main(){
  int x, y;
  cin >> x >> y;

  cout << gcd(x, y) << endl;
}
