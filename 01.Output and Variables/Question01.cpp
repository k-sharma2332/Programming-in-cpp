// Take two integer a and b: a>b, and find the remainder when a is divided by b.
#include<iostream>
using namespace std;
int main(){
  int a = 24; //a means divided
  int b = 23; //b means divisor
  int q = a/b; //q is quotioent
  int r; // r is remainder
  // a = (b+q) + r
  r = a - (b+q);
  cout<<r;  
}