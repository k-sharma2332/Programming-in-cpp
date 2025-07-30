// Find the first non-repeating element in the array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of the array: ";
//     cin>>n;
//     cout<<"Enter the elements of the array: ";
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(v[i]==v[j])
//             break;
//             if(j==n) cout<<v[i];
//             return 0;
//         }
//     }
// }
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {4, 2, 2, 4, 7};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int j;
        // Checking if the  element is present in array
        for (j = 0; j < n; j++)
            if (i != j && arr[i] == arr[j])
                break;
        if (j == n)
        {
            cout << arr[i];
            return 0;
        }
    }
    return 0;
}