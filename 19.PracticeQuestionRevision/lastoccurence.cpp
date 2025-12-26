#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int x;
    cout<<"enter size of array : ";
    cin>>x;
    for(int i=0;i<x;i++){
        int y;
        cout<<"enter element "; 
        cin>>y;
        v.push_back(y);
    }
    int idx=-1;
    int target;
    cout<<"enter target : ";
    cin>>target;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==target){ idx = i;
        break;
        }
    }
    cout<<idx;
}