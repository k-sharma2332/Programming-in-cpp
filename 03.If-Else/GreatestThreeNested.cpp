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
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{ //c>a,a>b->c>a>b
            cout<<c<<" is greatest";
        }
    }
    else{//b>a
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{//c>b>a
            cout<<"c"<< "is greatest";
        }
    }
}