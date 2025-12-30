#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int> &v){
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0){
            i++;
        }
        else if(v[j]==1){
            j--;
        }
        ///if(i>j) break; you use this condition but it's not necessary if you use else if
        else if(v[i]==1&&v[j]==0){
            int temp = v[i];
            v[i]=v[j];  
            v[j]=temp;
            i++;
            j--;
        }
    }

}

int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}