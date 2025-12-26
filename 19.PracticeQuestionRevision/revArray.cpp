#include<iostream>
#include<vector>
using namespace std;

display(vector<int> &v){
    for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void reversePart(int i, int j,vector<int> &v){
    while(i<=j){
       int temp = v[i];
         v[i]=v[j];
            v[j]=temp;
        i++;
        j--;
    }
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
    reversePart(0, 2, v1);
    display(v1);
    // for(int i=0,j=v1.size()-1;i<=j;i++,j--){
    //     int temp = v1[i];
    //     v1[i]=v1[j];
    //     v1[j]=temp;
    // }
    // display(v1);
}

