#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    };
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 12, 14, 18};
    int index = binarySearch(even, 6, 12);
    cout << "index of 12 is " << index << endl;
    cout << "Odd" << endl;
    int oddindex = binarySearch(odd, 5, 14);
    cout << "odd index of 14 is:" << oddindex << endl;
    return 0;
}