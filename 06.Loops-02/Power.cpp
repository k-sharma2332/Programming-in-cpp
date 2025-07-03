#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    int power = 1;
    for(int i=1;i<=b;i++){
        power = power*a;
    }
    cout<<a<<" rasied to the power "<<b<<" is "<<power;
}