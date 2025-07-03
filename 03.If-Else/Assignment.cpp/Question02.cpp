// //Given the radius of the circle, predict whether numerically the area of this circle is larger than the 
// circumference or not.
// Input 1: radius = 4
// Output 1: Area is greater than circumference.
// Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
// Perimeter = 2 * 3.14 * 4 = 25.12 unit
// Therefore area > perimeter.
#include<iostream>
using namespace std;
int main(){
    int radius,pi=3.14;
    cout<<"Enter the radius: ";
    cin>>radius;
    float Area,Circumference;
    Area = pi*radius*radius;
    cout<<"Area is "<<Area<<endl;
    Circumference = 2*pi*radius;
    cout<<"Circumference is: "<<Circumference<<endl;
    if(Area>Circumference){
        cout<<"Area is greater than circumference";
    }
    else{
        cout<<"Circumference is greater than Area";
    }
}