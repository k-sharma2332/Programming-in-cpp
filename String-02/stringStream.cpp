#include <iostream>
#include <string>
#include<sstream>
using namespace std;
int main(){
    string s = "khushi is a khushi";
    stringstream ss(s);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
}