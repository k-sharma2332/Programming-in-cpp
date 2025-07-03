#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    // if((n%5==0 || n%3==0) && (n%15!=0)){
    //     cout<<"The number is divisible by 5 or 3 but not 15";
    // }
    // else{
    //     cout<<"Not matching condition";
    // }
    // nested if-else
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"The number is divisible by 5 or 3 but not 15";
        }
        else{
            cout<<"Not Matching Condition";
        }
    }
        else{
            cout<<"Not Matching Condition";
        }
    }

