//Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int evenSum=0;
    int oddSum=0;
    for(int i=0;i<6;i++){
        if(i%2==0)
        evenSum=evenSum+arr[i];
        else
        oddSum=oddSum+arr[i];
    }
    cout<<evenSum-oddSum;
}