// Write a function to count the number of digits in a number and then print the square of this number.
#include <iostream>
using namespace std;

void digit(int n){
    int count=0;
    while(n>0){
        n = n/10;
        count++;
    }
    cout<<count*count;
    
}


int main(){
    int n;
    cin>>n;
    digit(n);
    
}