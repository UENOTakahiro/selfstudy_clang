#include<iostream>
#include<cmath>
using namespace std;

class Point{
  public:
  double x, y;

  Point(double xx, double yy){
    x = xx;
    y = yy;
  }
};

double getDistance(Point p1, Point p2){
  return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(){
  Point p1(0,0), p2(0,0);

  cin >> p1.x >> p1.y >> p2.x >> p2.y;

  cout << getDistance(p1, p2) << endl;

  return 0;
}
