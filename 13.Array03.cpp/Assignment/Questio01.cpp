// Count the number of triplets whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter target: ";
    cin>>x;
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"enter elements of array: ";
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(v[i]+v[j]+v[k]==x){
                    cout<<"Triplet found: "<<"["<<i<<","<<j<<","<<k<<"]"<<endl;
                }
            }
        }
    }
}
