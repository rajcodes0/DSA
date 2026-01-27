#include <bits/stdc++.h>
using namespace std;

  vector<int> getMinMax(vector<int> &arr) {
           int n = arr.size();
           int min = INT_MAX,maxi =  INT_MIN;
           vector<int>ans;
       
       for (int i = 0; i<n;i++){
           if(arr[i] < min) min = arr[i];
           if(arr[i] > maxi) maxi = arr[i];
           
           
       }
       ans.push_back(min);
        ans.push_back(maxi);
       return ans;
          

    }
int main() {
    
    return 0;
}