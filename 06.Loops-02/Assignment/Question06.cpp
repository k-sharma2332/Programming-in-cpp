//  WAP to print the sum of a given number and its reverse.
//  Sample Input : 12
//  Sample Output : 33 [12+21]
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int x = n;
    int lastDigit=0;
    int reverse = 0;
    while(n>0){
        lastDigit = n%10;
        reverse*=10; 
        reverse += lastDigit;
        n/=10;
    }
     cout<<x+reverse;  
       
}