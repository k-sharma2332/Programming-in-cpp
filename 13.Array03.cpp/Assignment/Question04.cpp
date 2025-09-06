// Move all zeroes at the end.
#include<iostream>
#include<vector>
using namespace std;
void swapping (int n,vector<int> &v){
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0 && v[j]!=0){
            swap(v[i],v[j]);
            i++;
            j--;
        }
        else if(v[i]==0 && v[j]==0){
            j--;
        }
        else if(v[i]!=0 && v[j]==0){
            i++;
            j--;
        }
        else{
            i++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the element of array: ";
    vector <int> v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    swapping(n,v);
    for(int a=0;a<n;a++){
        cout<<v[a]<<" ";
    }
    // int i=0,j=0;
    // while(j<=n-1){
    //     if(arr[j]!=0){
    //         swap(arr[i],arr[j]);
    //         i++,j++;
    //         break;
    //     }
    //     else {
    //         j++;
    //     }
       
    // }

    
}