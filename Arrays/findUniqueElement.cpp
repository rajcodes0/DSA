#include <bits/stdc++.h>
using namespace std;

int uniqueElement(int arr[], int size){
int ans = 0;
    for (int i = 0; i< size;i++)
    {
        int currentValue = arr[i];
        ans = ans  ^ currentValue;
    }
    return ans;
}

int main() {
    int arr[] = { 1, 2 ,3,4,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    
  cout<<uniqueElement( arr,size)<< " is Unique Number in this above array;";
    
}


// 1 is the unique no 