// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.

#include <iostream>
using namespace std;
int main()
{
    int a[5] = {7, 2, 32, 5, 20};
    int sumo;
    int sume = sumo = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            sume = sume + a[i];
        else
            sumo = sumo + a[i];
    }
    cout << (sume - sumo);
    return 0;
}