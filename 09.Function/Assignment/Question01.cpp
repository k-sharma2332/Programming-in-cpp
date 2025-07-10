//: Write a function to print squares of first n natural numbers, taking n as argument to the function.
#include<iostream>
using namespace std;
int sqrt(int n){
    int sqrt = n*n;
    return sqrt;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<sqrt(n);
}