#include<iostream>
using namespace std;              //linear search imp**
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }   
    int x;
    cout<<"Enter the element want to search: ";
    cin>>x;
    // search 
    // checkmark 
    bool flag = false; // not present 
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag = true; // element present
    }
    if(flag==true) cout<<"Element are present";
    else cout<<"Element are not present";
}