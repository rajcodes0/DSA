/* Problem: Swap Alternate Elements in an Array
**problem Statement:**
Given an array of integers, write a program to **swap alternate elements** of the array.
* Swap the **0th and 1st** elements
* Swap the **2nd and 3rd** elements
* Swap the **4th and 5th** elements, and so on
If the array has an **odd number of elements**, the **last element remains unchanged**.
### 🔹 Input
* An integer array `arr` of size `n`
🔹 Output
 The same array after swapping alternate elements
🔹 Example 1
**Input:**
arr = {1, 2, 3, 4, 5, 6}
**Output:**
{2, 1, 4, 3, 6, 5}
*/

#include <bits/stdc++.h>
using namespace std;

void alternativeSwap(int arr[], int size)
{
    int i = 0;
    while (i + 1 < size)
    {
        swap(arr[i], arr[i + 1]);
        i += 2;
    }
}
int main()
{

    int arr[] = {3, 5, 6, 7, 8, 9, 12,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    alternativeSwap(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


// 5 3 7 6 9 8 5 12 %   


