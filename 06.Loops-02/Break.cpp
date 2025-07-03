//wap to check the no.is prime or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    bool flag=true; // true means prime
    for(int i=2;i<=n-1;i++){
        flag = false; // false means composite
        break;
        }
    if(n==1) cout<<"1 is nor prime or neither composite";
    else if(flag=true) cout<<n<<" is prime";
    else cout<<n<<" is composite no.";
}