#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an integer: ";
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"n is divisible by 5 and 3";
        }
        else{
            cout<<"n is divisble by 5 but not 3";
        }
    }
    else{
        cout << "Not Matching Condition";
    }
}