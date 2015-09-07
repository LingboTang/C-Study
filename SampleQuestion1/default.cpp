#include <iostream>

using namespace std;

void foo(int a, int b=2, int c =3,  int d=4) {
  cout << a+b+c+d;
}

int main() {

//foo(); is illegal
//  foo(x); calls foo(x,2,3,4);
//  foo(x,y); calls foo(x,y,3,4);
//  foo(x,y,z); calls foo(x,y,z,4);
//  foo(4,3,2,1); calls foo(4,3,2,1);
//  illegal:
//  void bar(int a=1, int b, int c=3, int d);
//  Why? bar(x,y,z) would be ambiguous - is c or
//  a assigned a default value?


  foo(4,3,2,1);
  cout << "success";
  return 0;


}
