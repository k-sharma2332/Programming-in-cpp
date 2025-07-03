// Given the length and breadth of a rectangle, write a program to find whether numerically the area of 
// the rectangle is greater than its perimeter.
// Input 1: length = 5 breadth = 7
#include<iostream>
using namespace std;
int l,b;
int main(){
cout<<"enter the length: ";
cin>>l;
cout<<"enter the breadth: ";
cin>>b;
int Area = l*b;
int Perimeter = 2*(l+b);
cout<<"Area is "<< Area<<endl;
cout<<"Perameter is "<< Perimeter<<endl;
if(Area>Perimeter){
    cout<<"Area is greater than perameter";
}
else{
    cout<<"Perameter is greater than area";
    }
}

