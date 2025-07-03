#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<"is gretest";
    }
    if(b>a && b>c){
        cout<<b<<"is greatest";
    }
    if(c>a && c>b){
        cout<<c<<"is greatest";
    }
}