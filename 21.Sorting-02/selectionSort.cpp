#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {5,3,4,1,8};
    int n=5;
    
    for(int ele : arr){
        cout<<ele<<" ";
    }
cout<<endl;
    //selction sort
    for(int i=0;i<n-1;i++ ){
        int min=INT16_MAX;
        int mindx = -1;
        //minimum calcution
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
     
    for(int ele : arr){
        cout<<ele<<" ";
    }
}