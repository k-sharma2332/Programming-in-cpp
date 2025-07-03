#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        int x = i;
        int cubesum = 0;
        while (x > 0)
        {
            int ld = x % 10;
            cubesum += (ld * ld * ld);
            x /= 10;
        }
        if (i == cubesum)
            cout << cubesum << endl;
    }
}