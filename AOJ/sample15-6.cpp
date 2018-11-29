#include<iostream>
#include<string>
using namespace std;

struct Student{
  string name;
  int id;
};

int main(){
  Student student;
  student.id = 2014;
  student.name = "wakamatsu";

  cout << student.id << " " << student.name << endl;

  return 0;
}
