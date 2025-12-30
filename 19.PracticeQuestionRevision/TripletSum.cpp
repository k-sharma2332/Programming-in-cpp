//Count the number of triplets whose sum is equal to the given value x
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int y;
        cout<<"enter element "; 
        cin>>y;
        v.push_back(y);
    }
    int x;
    cout<<"enter target : ";
    cin>>x;
    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            for(int k=j+1;k<=v.size()-1;k++){
                if(v[i]+v[j]+v[k]==x){
                    cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
                }
            }
        }
    }
}