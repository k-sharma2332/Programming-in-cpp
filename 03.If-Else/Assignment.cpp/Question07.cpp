// // Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
// Input 1: 2 0
// Output 1: the point lies on the x - axis
#include<iostream>
using namespace std;
int main(){
    float x, y;
 printf("Enter the x-y coordinates of the point : ");
 cin >> x >> y;
 if (x == 0 && y == 0)
 cout << "The point is on the origin.";
 if (x == 0 && y != 0)
 cout << "The point lie on the y-axis.";
 if (x != 0 && y == 0)
 cout << "The points lie on the x-axis.";
 if (x != 0 && y != 0)
 cout << "The points lie on the plane.";
 
}