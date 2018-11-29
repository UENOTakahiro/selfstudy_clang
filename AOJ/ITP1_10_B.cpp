#include <bits/stdc++.h>
using namespace std;

int main(){
  double a, b, c;
  cin >> a >> b >> c;
  double c_rad = c * acos(-1) / 180;
  c = sqrt(pow(a, 2) + pow(b, 2) - 2*a*b*cos(c_rad));

  double S, L, h;
  S = 0.5 * a * b * sin(c_rad);
  L = a + b + c;
  h = b * sin(c_rad);

  printf("%.8lf\n%.8lf\n%.8lf\n", S, L , h);
}
