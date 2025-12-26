#include<iostream>
#include<vector>
using namespace std;

display(vector<int> &v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector <int> v1;
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int y;
        cout<<"enter element "; 
        cin>>y;
        v1.push_back(y);
    }
    display(v1);
    vector <int> v2(v1.size());
    for(int i=0;i<v1.size();i++){
        // int j = v1.size()-1-i;;
        // v2[j]=v1[i];
        v2[i] = v1[v1.size()-1-i];
    }
    display(v2);
}