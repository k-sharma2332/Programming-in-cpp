#include <iostream>
#include <string>
#include<sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string s= "raghav is a maths teacher. he is also a dsa teacher.";
    stringstream ss(s);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
   
    cout<<endl;
    sort(v.begin(),v.end());
    int maxc=1;
    int count = 1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        maxc = max(maxc,count);
    }
    cout<<maxc<<endl;
    
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        if(count==maxc){
            cout<<v[i]<<endl;
        }
    }
}