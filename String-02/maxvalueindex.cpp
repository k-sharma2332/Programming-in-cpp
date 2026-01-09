#include <iostream>
#include <string>
using namespace std;
int main(){
    string arr[] = {"0123","005678","91011","1213"};
    int max = stoi(arr[0]);
    string maxs = arr[0];
    for(int i=1;i<4;i++){
        int num = stoi(arr[i]);
        if(num>max){
            max = num;
            maxs = arr[i];
        }
    }
    cout<<maxs<<endl;
}