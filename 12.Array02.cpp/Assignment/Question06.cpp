//  Find the unique number in a given Array where all the elements are being repeated twice with one
// value being unique.
//*doubt*
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 2, 1, 1, 20};
    for (int i = 0; i < 5; i++)
    {
        int count = 0;
        for (int j = 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 0)
        {
            cout << arr[i];
            return 0;
        }
    }
    cout << "No unique value";
    return 0;
}