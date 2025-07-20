#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(34);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(34);
    v.push_back(3);
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(34);
    for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

}