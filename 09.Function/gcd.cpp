#include<iostream>
using namespace std;

int gcd(int a,int b){
    int hcf = 1;
    //i = 24,23,22,21...1
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main(){
    int a;
    cout<<"enter the value of a: ";
    cin>>a;
    int b;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<gcd(a,b);
}