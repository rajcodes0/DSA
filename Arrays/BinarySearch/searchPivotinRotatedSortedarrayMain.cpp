#include <bits/stdc++.h>
using namespace std;




int Pivot(vector<int>& arr, int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        int mid = start + (end - start) / 2;

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int binarySearch(vector<int>& arr, int start, int end, int k){
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == k) return mid;
        else if(arr[mid] < k) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k){
    int pivot = Pivot(arr, n);

    // Search in right sorted part
    if(k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    // Search in left sorted part
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }
}
int main() {
    vector<int> arr = {8, 10, 17, 1, 3};

    int k;
    cout << "Enter element to search: ";
    cin >> k;

    int index = search(arr, arr.size(), k);

    if (index == -1) {
        cout << "Element not found\n";
    } else {
        cout << "Element found at index: " << index << "\n";
    }

    return 0;
}




// notes --> 



/*  
Pivot = index of the smallest element** in the rotated sorted array.

Example:
`[8, 10, 17, 1, 3]`
Pivot = index `3` (value `1`)

**Pivot Steps (Binary Search)**

1. Set `start = 0` and `end = n-1`
2. While `start < end`:
3. Find `mid = start + (end - start)/2`
4. Compare `arr[mid]` with `arr[0]`
5. If `arr[mid] >= arr[0]`

   * it means `mid` is in the **left sorted part**
   * so pivot must be on the **right side**
   * move `start = mid + 1`
6. Else (`arr[mid] < arr[0]`)

   * it means `mid` is in the **right sorted part**
   * pivot can be `mid` or on the **left**
   * move `end = mid`
7. When loop ends, `start == end`
8. Return `start` → this is the pivot index

---

## ✅ Part 2: Steps to search the element `k`

Now we know pivot divides array into **two sorted parts**.

Example:
`[8, 10, 17, 1, 3]`
pivot = 3

Left part: `arr[0 … pivot-1] = [8,10,17]`
Right part: `arr[pivot … n-1] = [1,3]`

### **Search Steps**

1. Find `pivot = Pivot(arr, n)`
2. Check where `k` can exist:
3. If `k >= arr[pivot]` AND `k <= arr[n-1]`

   * then `k` is in the **right sorted part**
   * do binary search from `pivot` to `n-1`
4. Else

   * `k` is in the **left sorted part**
   * do binary search from `0` to `pivot-1`
5. Binary search returns the index if found, otherwise `-1`

---

## ✅ Part 3: Steps of Binary Search

Binary search works on a **sorted part only**.

### **Binary Search Steps**

1. Set `start` and `end`
2. While `start <= end`:
3. Find `mid`
4. If `arr[mid] == k` → return `mid`
5. If `arr[mid] < k` → move right: `start = mid + 1`
6. Else move left: `end = mid - 1`
7. If not found, return `-1`

*/
