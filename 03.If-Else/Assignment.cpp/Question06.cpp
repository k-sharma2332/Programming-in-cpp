//  If the marks of A, B and C are input through the keyboard, write a program to determine the student 
// scoring the least marks.
// Input 1: A = 23 , B = 34 , C = 71
// // Output : ‘A’ has the least marks.
#include<iostream>
using namespace std;
int main(){
    int A,B,C;
    cout<<"Ente the value of A: ";
    cin>>A;
    cout<<"Enter the value of B: ";
    cin>>B;
    cout<<"Enter the value of C: ";
    cin>>C;
    if(A<=B&&A<=C){
        cout<<"A is least ";
    }
    else if(B<=A&&B<=C){
        cout<<"B is least ";
    }
    else{
        cout<<"C is least ";
    }
}