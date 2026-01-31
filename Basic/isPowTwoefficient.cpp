#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    int ans = 1;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }
        if (ans < INT_MAX / 2)
            ans = ans * 2;
    }
    return false;
}
int main()
{
    if (isPowerOfTwo(24))
    {
        cout << "yes,power of 2" << endl;
    }
    else
    {
        cout << "false,power of 2" << endl;
    }
}
