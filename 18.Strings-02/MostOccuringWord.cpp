#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str = "Raghav is maths teacher. he is dsa mentor as well";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
       v.push_back(temp);
    }
    //vector print
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
  int maxCount = 1;
  int count = 1;
    for(int i=1;i<v.size();i++){
       if(v[i]==v[i-1]) count++;
       else count = 1;
       maxCount = max(maxCount,count);
    }
    cout<<maxCount;
    cout<<endl;
    for(int i=1;i<v.size();i++){
       if(v[i]==v[i-1]) count++;
       else count = 1;
       if(count==maxCount){
        cout<<v[i]<<" "<<maxCount;
       }
    }
}