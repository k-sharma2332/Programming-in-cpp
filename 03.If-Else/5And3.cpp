#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an integer: ";
    cin>>n;
    if(n%5==0&&n%3==0){
        cout<<"n is divisible";
    }
    else{
        cout<<"not divisible";
    }
}