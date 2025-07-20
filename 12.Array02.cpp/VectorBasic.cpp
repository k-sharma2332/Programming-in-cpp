#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // you dont need to mention size;
    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"size "<<v.size()<<endl;
    v.push_back(4);
    cout<<"capacity "<<v.capacity()<<endl;
     cout<<"size "<<v.size()<<endl;
    // v[0]=32;
    v.push_back(5);
    cout<<"capacity "<<v.capacity()<<endl;
     cout<<"size "<<v.size()<<endl;
    v.push_back(54);
    cout<<"capacity "<<v.capacity()<<endl;
     cout<<"size "<<v.size()<<endl;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
}