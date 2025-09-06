#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v(3,2);
    vector<vector<int>> v(3 , vector<int>(4,2)); //3 row,4 coloumn,2 capcity
   
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
     cout<<v.size()<<endl; // size of vector
     cout<<v[0].size(); //coulmn size
     

}