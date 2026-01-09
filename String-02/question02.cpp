#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "23456";
    int n = s.length();
    int max = 0;
    for(int i=0;i<n;i++){
        int num = s[i] - '0'; //character to integer conversion
        if(num>max){
            max = num;
        }
    }
    int secmax = -1;
    for(int i=0;i<n;i++){
        int num = s[i]-'0';
        if(num>secmax&&num<max){
            secmax = num;
        }
    }
        cout<<secmax;
}