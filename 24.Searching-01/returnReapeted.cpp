#include<iostream>
using namespace std;
int main(){
    int arr[9] = {9,1,2,2,3,4,5,6,8};
    int n = 9;
    //int x = 1 ;
   
    int lo=0;
    int hi = n-1;
    int ans=-1;
    
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==arr[mid+1]){
            ans=arr[mid];
            break;
        }
        else if(arr[mid]==arr[mid-1]){
            ans=arr[mid];
            break;
        }
        else if(arr[lo]==arr[lo+1]){
            ans=arr[lo];
            break;
        }
        else if(arr[hi]==arr[hi-1]){
            ans=arr[hi];
            break;
        }
        else{
            lo++;
            hi--;
        }
    }
    
    cout<<ans;
    
   
}
