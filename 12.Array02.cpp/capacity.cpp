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
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;

}