#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {2, 3, 4, 5, 6};
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[i]); i++)
    {
       sum = sum + arr[i];
    }

    cout << "Sum = " << sum;
    return 0;
}
