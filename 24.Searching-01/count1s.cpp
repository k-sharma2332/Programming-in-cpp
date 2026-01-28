#include<iostream>
using namespace std;
int main(){
    int arr[9] = {0,0,0,0,0,1,1,1,1};
    int n = 9;
    int x = 1 ;
   
    int lo=0;
    int hi = n-1;
    int firstOne=-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(arr[mid]==x){
            firstOne=mid;
            hi=mid-1; ///move left
        }
        else {
            lo = mid+1; ///move right
        }
    }
    int count;
    if(firstOne==-1){
        count=0;
    }
    else{
        count = n - firstOne;
    }
    cout<<count;
    
   
}
