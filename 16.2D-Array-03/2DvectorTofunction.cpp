#include<iostream>
#include<vector>
using namespace std;
void change2Darray(vector<vector<int>> &v){
    v[0][0] = 100;
}
void length(vector<vector<int>>&v){
    cout<<v.size();
}
int main(){
    vector<int> v1;  //if we write v1(3) means give size so it should be 000123..
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    vector<vector<int>> v;
    v.push_back(v1);
    v.push_back(v2);
    cout<<v[0][0]<<endl;
    change2Darray(v);
    cout<<v[0][0]<<endl;
    length(v);
}