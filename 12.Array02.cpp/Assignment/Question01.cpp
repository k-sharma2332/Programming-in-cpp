// Count the number of element strictly greater than x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the no. of element: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
       v.push_back(q);
      
    }
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int x;
    cout<<"Enter the no. you want to check: ";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]>x) count++;
        
    }
    cout<<count;
}