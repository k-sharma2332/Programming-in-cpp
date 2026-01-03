#include <iostream>
using namespace std;

int main() {
    int n=5;
    int a[10][10]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25},
                   {26,27,28,29,30},{31,32,33,34,35},{36,37,38,39,40},{41,42,43,44,45},{46,47,48,49,50}};

     // odd size of square matrix

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<a[i][j];
        }
        cout << endl;
    }

    int mid = n / 2;

    // Print middle column (before middle row)
    for (int i = 0; i < mid; i++) {
        cout << a[i][mid] << endl;
    }

    // Print middle row
    for (int j = 0; j < n; j++) {
        cout << a[mid][j] << " ";
    }
    cout << endl;

    // Print middle column (after middle row)
    for (int i = mid + 1; i < n; i++) {
        cout << a[i][mid] << endl;
    }

    return 0;
}
