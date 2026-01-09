#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
   
    string s = "PhyshicsWallah";
    string rs = s;
    reverse(rs.begin(), rs.end());
    string r = s + rs;
    cout<<r<<endl;
    

}