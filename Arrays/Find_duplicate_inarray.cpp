#include <bits/stdc++.h>
using namespace std;


int findDuplicate(vector<int> &arr) 
{
   int ans = 0;
   for (int i = 0; i<arr.size();i++){
       ans = ans ^ arr[i];
   }
   for(int i = 1; i< arr.size();i++){
       ans = ans ^ i;
   }
   return ans;
	
}

int main() {
    vector<int>arr = {1, 3, 4, 2, 2}; 
    cout<<findDuplicate(arr)<<endl;
    return 0;
}



/*  
Because the array has **one extra element** due to the duplicate.

 Rule of this problem

If `arr.size() = n`, then the array contains numbers from:

1 to (n-1)
and one number is repeated two times, so total elements become n.
[1, 3, 4, 2, 2
Size = `5` ✅
Normally numbers should be:

1, 2, 3, 4   → total 4 numbers = (n-1)

But because **one number repeats**, total becomes:
4 normal numbers + 1 extra duplicate = 5 elements
That’s why we use **n-1**.
**Duplicate adds 1 extra element**, so the unique range becomes **size - 1**.
for(int i = 1; i < arr.size(); i++)
because `arr.size()-1` is the maximum expected number.

after secound loop this shit is like this 
ans = (1 ^ 3 ^ 4 ^ 2 ^ 2) ^ 1 ^ 2 ^ 3 ^ 4


*/
