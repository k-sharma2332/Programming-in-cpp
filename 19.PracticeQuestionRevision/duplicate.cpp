// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    int dup = arr[0];
    bool flag = false;  // not present
    for(int i=1;i<=n-1;i++){
        if(arr[i]==dup) flag = true;  // present
    }
    if(flag == true){
        cout<<"There is duplicate value in this array";
    }
    else cout<<"There is no duplicate Value in this array";
}