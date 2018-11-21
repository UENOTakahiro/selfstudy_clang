#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  int d, r;
  cin >> a >> b;

  double f;

  d = a / b;
  r = a % b;
  f = (double)a/b;

  printf("%d %d %lf\n", d, r, f);
}
