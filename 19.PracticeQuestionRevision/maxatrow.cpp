#include <iostream>
using namespace std;

int main() {
    int a[3][4]={{1,2,3,4},{5,6,7,8},{1,0,1,2}};
    int maxSum = 0;
    int rowIndex = 0;

    // Input matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    // Find row with maximum sum
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 4; j++) {
            sum += a[i][j];
        }

        if(sum > maxSum) {
            maxSum = sum;
            rowIndex = i;
        }
    }

    // Output row number (0-based index)
    cout << rowIndex << endl;

    return 0;
}
