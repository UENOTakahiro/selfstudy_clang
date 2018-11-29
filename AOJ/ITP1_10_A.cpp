#include <bits/stdc++.h>
using namespace std;

int main(){
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  double res = 0;
  res = sqrt(pow(x2-x1, 2) + pow(y2-y1,2));

  printf("%.8lf\n", res);
}
