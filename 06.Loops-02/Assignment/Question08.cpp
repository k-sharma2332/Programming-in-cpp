//  Print first ‘n’ fibonacci numbers.
//  Sample Input : 10
//  Output :
// 1 1 2 3 5 8 13 21 34 55
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    int a=1,b=1,sum=0;
    for(int i=1;i<=n;i++){
         cout<<a<<endl;
        sum=a+b;
        a=b;
        b=sum; 
    }
   
}