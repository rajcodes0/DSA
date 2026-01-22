#include <bits/stdc++.h>
using namespace std;



  void reverseArray(vector<int> &arr) {
     
     int n = arr.size();
     vector<int> temp(n);
     
     for(int i = 0;i< n; i++){
         temp[i] = arr[n-i-1];
     }
     
     for(int i = 0; i< n;i++){
         arr[i] = temp[i];
     }
       
    }
int main() {
    vector<int> arr ={1,2,3,4,5};
     reverseArray(arr);
    
    cout << "Reversed array: ";
    for(int x : arr) {
        cout << x << " ";
    }
    return 0;
}