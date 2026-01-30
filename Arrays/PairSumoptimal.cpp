#include <iostream>
#include <vector>

using namespace std;

vector<int> PairSum(vector<int> nums, int target) {
    vector<int> ans;
    int i = 0;
    int j = nums.size()- 1;
   while (i < j)
   {
    int pairsum = nums[i] + nums[j];
    if(pairsum > target){
        j--;
    }
    else if (pairsum < target){
        i++;
    }
    else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;}
    
   }
    return {}; // Fallback: returns an empty vector if no pair is found
}

int main() {
    vector<int> nums = {2, 3, 4, 5, 6, 7};
    int target = 5;
    
    vector<int> result = PairSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}