// WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;
int main(){
    int radius;
    int h;
    int pi = 3.14;
    int volume;
    cout<<"Enter the radius:";
    cin>>radius;
    cout<<"Enter the value of h:";
    cin>>h;
    volume = pi*radius*radius*h;
    cout<<volume;
}