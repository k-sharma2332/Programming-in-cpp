#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"Enter the character: ";
    cin>>ch;
    // a to z -> 97 to 122;
    // A to Z -> 65 to 90;
    int ascii = (int)ch;
    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            cout<<"The Character is vowel";
        }
        else{
            cout<<"The Character is consonent";
        }
    }
    else{
        cout<<"The character is not alphabet";
    }
}/// wrong 