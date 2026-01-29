#include <bits/stdc++.h>
using namespace std;

int maxsubArray(vector<int>& nums) {
    int currentsum = 0;
    int maxSum = INT_MIN;

    for (int val : nums) {
        currentsum += val;
        maxSum = max(currentsum, maxSum);

        if (currentsum < 0) {
            currentsum = 0;
        }
    }
    return maxSum;
}


int main() {
    vector<int> nums = { -2,1,-3,4,-1,2,1,-5,4 };
    int ans = maxsubArray(nums);
    cout << ans << endl;
    return 0;
}