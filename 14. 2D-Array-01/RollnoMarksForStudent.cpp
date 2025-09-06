#include<iostream>
using namespace std;
int main(){
    // roll no. , marks
    // 4 student
    int arr[2][4];
    cout<<"Enter the elements: ";
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    // printing roll no.,marks
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // int arr[4][2];
    // cout<<"Enter the elements: ";
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<2;j++){
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;
    // }
    // // printing roll no.,marks
    // for(int i=0;i<4;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}