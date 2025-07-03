#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the cost price: ";
    int cp;
    cin>>cp;
    cout<<"Enter the selling price : ";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit is "<<sp-cp;
    }
    if(cp>sp){   
        cout<<"Loss is "<<cp-sp;
    }
    if(cp==sp){
        cout<<"No Loss,No Profit";
    }
}