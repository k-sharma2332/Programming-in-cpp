//WAP to find the largest three elements in the array
#include<iostream>
using namespace std;
int main(){
    int arr[6] = {1,5,3,7,2,8};
    int max1=arr[0];
    int max2=arr[0];
    int max3=arr[0];

    for(int i=1;i<6;i++){
        if(arr[i]>max1){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2){
            max3=max2;
            max2=arr[i];
        }
        else if(arr[i]>max3){
            max3=arr[i];
        }
    }
cout<<max1<<" "<<max2<<" "<<max3;
}