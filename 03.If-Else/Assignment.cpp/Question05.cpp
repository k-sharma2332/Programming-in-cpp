// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or 
// isosceles triangle.
// Input : side1 = 5 side2 = 4 side3 = 4
// Output: This is an Isosceles triangle.
#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter the first side of triangle: ";
    cin>>side1;
    cout<<"Enter the second side of triangle: ";
    cin>>side2;
    cout<<"Enter the third Side of triangle: ";
    cin>>side3;
    if(side1==side2 && side2==side3){
        cout<<"The triangle is Equilateral Triangle";
    }
    else if(side1==side2||side2==side3||side3==side1){
        cout<<"The triangle is Isosceles Triangle";
    }
    else{
        cout<<"The triangle is scalene Triangle";
    }
    
}