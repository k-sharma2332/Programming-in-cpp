#include<iostream>
using namespace std;
int main(){
    int arr[9] = {1,2,2,3,3,4,18,21,24};
    int n = 9;
    int x = 3 ;
   
    int lo=0;
    int hi = n-1;
    bool flag = false;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
           if(arr[mid+1]!=x){
            flag=true;
            cout<<mid;
            break;
           }
           else{
             // arr[mid+1] = x
             lo=mid+1;
           }
        }
        else if(arr[mid]<x) lo = mid+1;
        else hi = mid-1;
    }
    if(flag==false) cout<<arr[hi];
}
