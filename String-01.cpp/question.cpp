#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "khushi";
    cout << s << endl;
    for(int i=0; s[i] != '\0'; i++){
       if(i%2==0){
        s[i] = 'K';
       }
    }
    cout << s << endl;
}