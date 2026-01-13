#include <bits/stdc++.h>
using namespace std;

void alternativeSwap(int arr[], int size)

{

    int i = 0;
    while (i + 1 < size)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        i += 2;
    }
}

int main()
{
    int arr[] = {3, 5, 6, 7, 8, 9, 12, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    alternativeSwap(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}