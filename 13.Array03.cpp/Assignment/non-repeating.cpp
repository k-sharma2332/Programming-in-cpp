#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter the size of the array: "<<endl;
    // cin>>n;
    // vector<int> v(n);
    // cout<<"Enter the element of array: "<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>v[i];
    //     if(n==1)
    //     cout<<v[n-1];

    // }
    // bool flag = false;
    // for(int i=0;i<n-1;i++){
    //     flag = false;
    //     for(int j=i+1;j<n;j++){
    //         if(v[j] == v[i]){
    //             flag = true;
    //             break;
    //         }
    //     }
    //     if(flag == false){
    //         cout<<v[i];
    //         break;
    //     }
    // }
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the element: ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=n-1;i++){
        bool flag = false;
        for(int j=0; j<=n-1;j++){
        if(i==j) continue;
        if(v[i]==v[j]){
            flag=true;
            break;
        }
    }
    if(flag==false){
        cout<<"Element which are first non-repeating: "<<v[i];
        break;
    }
}
}