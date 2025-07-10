#include<iostream>
using namespace std;

// void greeting(){
//     cout<<"Good Morning"<<endl;
//     cout<<"Apka din accha na jaye bhot accha jaye"<<endl;
// }
// int main(){
//     greeting();  
//     greeting();
// }
void triangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    triangle(4);
    triangle(5);
}