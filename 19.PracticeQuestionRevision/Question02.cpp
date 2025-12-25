//Find the second largest element in the given Array in one pass
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
    int max1= arr[0] ;
    int max2 = arr[0];;
    for(int i=0;i<n;i++){
        if(max1<arr[i]){
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i] && arr[i]!=max1){
            max2=arr[i];
        }

    }
    if(max2==arr[0]){
        cout<<"NO second element exists"<<endl;
    }
    else  cout<<max2<<endl;
}
