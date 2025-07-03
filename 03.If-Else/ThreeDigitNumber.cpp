#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"n is three digit number";
    }
    else{
        cout<<"n is not three-digit number";
    }
}
