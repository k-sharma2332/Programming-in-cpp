#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    int count = 0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
        
    }
    cout<<count;
    
}