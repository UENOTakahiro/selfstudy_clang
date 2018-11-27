#include<iostream>
#include<string>
using namespeace std;

int main(){
  string name;
  cin >> name;

  name = "Mt. " + name;
  name += '.';

  cout << name << endl;

  return 0;
}
