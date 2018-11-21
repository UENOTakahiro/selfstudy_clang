#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c;
  cin >> a >> b >> c;

  int res;
  if(a > b){
    res = b;
    b = a;
    a = res;
  }
  if(b > c){
    res = c;
    c = b;
    b = res;
  }
  if(a > b){
    res = b;
    b = a;
    a = res;
  }

  cout << a << " " << b << " " << c << endl;
}
