#include<iostream>
#include<cctype>
#include<string>
using namespace std;

int main(){
  string greeting = "Hello";

  for(int i=0;i<greeting.size();i++){
    cout << greeting[i];
    greeting[i] = toupper(greeting[i]);
  }
  cout << "\n";
  cout << greeting << endl;

  return 0;
}
