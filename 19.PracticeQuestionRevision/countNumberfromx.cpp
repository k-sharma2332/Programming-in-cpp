#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element: "<<endl;
    cin>>x;
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
        
    }
    
    cout<<"The number are greater: "<<count;
    
}