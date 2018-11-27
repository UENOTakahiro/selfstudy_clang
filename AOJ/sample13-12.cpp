#include<iostream>
#include<string>
using namespace std;

int main(){
  string numbers = "0123456789";
  string sub, rep;

  cout << numbers.size() << endl;
  sub = numbers.substr(3,5);
  cout << sub << endl;

  rep = numbers.replace(3, 4, "ABCD");
  cout << rep << endl;

  return 0;
}
