// Given three points (x1, y1), (x2, y2) and
// (x3, y3), write a program to check if all the three points fall on one straight line.
// Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
// Output 1: All 3 points lie on the same line.
#include <iostream>
using namespace std;
int main() {
 float x1, y1, x2, y2, x3, y3, slope1, slope2;
 cout << "Enter points (x1, y1)" << endl;
 cin >> x1 >> y1;
 cout << "Enter points (x2, y2)" << endl;
 cin >> x2 >> y2;
 cout << "Enter points (x3, y3)" << endl;
 cin >> x3 >> y3;
 slope1 = (y2 - y1) / (x2 - x1);
 slope2 = (y3 - y2) / (x3 - x2);
 if (slope1 == slope2) {
 cout << "All 3 points lie on the same line";
 } else {
 cout << "All 3 points do not lie on the same line";
 }
 return 0;
}