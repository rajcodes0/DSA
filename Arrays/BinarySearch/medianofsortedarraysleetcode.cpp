#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2)
{
    // Ensure nums1 is the smaller array to keep complexity O(log(min(m, n)))
    if (nums1.size() > nums2.size())
    {
        return findMedianSortedArrays(nums2, nums1);
    }

    int m = nums1.size();
    int n = nums2.size();
    int low = 0, high = m;

    while (low <= high)
    {
        int partitionX = (low + high) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;

        // Boundary conditions: use INT_MIN/INT_MAX if partition is at the edges
        int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX)
        {
            // We found the perfect partition
            if ((m + n) % 2 == 0)
            {
                return (std::max(maxLeftX, maxLeftY) + std::min(minRightX, minRightY)) / 2.0;
            }
            else
            {
                return std::max(maxLeftX, maxLeftY);
            }
        }
        else if (maxLeftX > minRightY)
        {
            // We are too far right in nums1, move left
            high = partitionX - 1;
        }
        else
        {
            // We are too far left in nums1, move right
            low = partitionX + 1;
        }
    }
    return 0.0;
}

int main()
{
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {1, 2, 3};

    cout << "median is :" << findMedianSortedArrays(nums1, nums2);
}