//  WAP to print the sum of all the even digits of a given number.
//  Sample Input : 4556
//  Output: 10
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    int lastDigit=0;
    while(n>0){
        lastDigit = n%10;
        if(lastDigit%2==0) sum += lastDigit;
        n/=10;
    }
    cout<<sum;
   
}