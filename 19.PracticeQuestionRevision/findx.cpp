#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"enter the elment for search: ";
    cin>>x;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            flag = true;
        }
    }
    if(flag==true){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}