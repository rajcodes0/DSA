#include <iostream>
#include <vector>

using namespace std;

vector<int> PairSum(vector<int> nums, int target) {
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // Success: exits function here
            }
        }
    }
    return {}; // Fallback: returns an empty vector if no pair is found
}

int main() {
    vector<int> nums = {2, 3, 4, 5, 6, 7};
    int target = 11;
    
    vector<int> result = PairSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}