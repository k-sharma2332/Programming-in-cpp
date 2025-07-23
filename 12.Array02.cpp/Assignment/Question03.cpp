// check if array is sorted
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 2, 4, 7};
    for (int i = 1; i < 5; i++)
    {
        // Unsorted pair found
        if (arr[i - 1] > arr[i])
        {
            cout << "no" << endl;
            return 0;
        }
    }
    // No unsorted pair found
    cout << "yes" << endl;
    return 0;
}