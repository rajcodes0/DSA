#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> merged(nums1.size() + nums2.size());

    merge(nums1.begin(), nums1.end(),
          nums2.begin(), nums2.end(),
          merged.begin());
    int n = merged.size();

    if (n % 2 != 0)
    {
        // Odd case: Return the middle element
        return (double)merged[n / 2];
    }
    else
    {
        // Even case: Average of the two middle elements
        return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
    }
}
int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};

    cout<<"median is : "<<findMedianSortedArrays(nums1,nums2);

    return 0;
}