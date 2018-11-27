#include<iostream>
#include<cctype>
using namespace std;

int main(){
  char ch;
  cin >> ch;

  cout << ch << " is ";
  if( !isalpha(ch) ) cout << "not ";
  cout << "alphabet." << endl;

  cout << ch << " is ";
  if( !isdigit(ch) ) cout << "not ";
  cout << "digit." << endl;

  return 0;
}
