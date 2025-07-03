#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    if(n<0){
        n = -n;
    }
    cout<<n;
}