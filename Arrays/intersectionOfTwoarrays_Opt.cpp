#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0;
    int j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout << endl;
    return ans;
}

int main()
{
    vector<int> arr1 = {2, 3, 4, 5, 6, 8};
    vector<int> arr2 = {2, 4, 5, 6, 7, 8, 8};

    // IMPORTANT: this logic works only if arrays are sorted
    // sort(arr1.begin(), arr1.end());
    // sort(arr2.begin(), arr2.end());

    int n = arr1.size();
    int m = arr2.size();
    vector<int> result = findArrayIntersection(arr1, n, arr2, m);

    return 0;
}

// 2 4 5 6 8