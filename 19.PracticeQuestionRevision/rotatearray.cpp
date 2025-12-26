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
    int k;
    cout<<"enter k: ";
    cin>>k;
if(k>n) k = k%n;
    reversePart(0, n-k-1, v1);
    reversePart(n-k, n-1, v1);
    reversePart(0, n-1, v1);

    display(v1);
   
}

