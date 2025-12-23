//: Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
int area(int r){
    int pi = 3.14;
    int area = 2*pi*r;
    return area;
}
int main(){
    int r;
    cout<<"enter radius: ";
    cin>>r;
    cout<<area(r);
}