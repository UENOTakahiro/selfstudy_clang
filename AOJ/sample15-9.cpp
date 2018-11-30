#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Robot{
public:
  int x, y, energy;
  string name;

  Robot(string n, int xx, int yy){
    name = n;
    x = xx;
    y = yy;
    energy = 100;
  }

  void move(int dx, int dy){
    x += dx;
    y += dy;
    energy -= abs(dx) + abs(dy);
  }

  void print(){
    cout << name << " is at (" << x << ", " << y << ") with " << energy << endl;
  }
};

int main(){
  Robot r1("Rose", 10, 10), r2("Mary", 0, 0);

  r1.move(1,3);
  r1.move(0,2);
  r2.move(3,5);
  r1.print();
  r1.move(3,-1);
  r2.move(4,2);
  r2.print();
  r1.move(-7,3);
  r1.print();

  return 0;
}
