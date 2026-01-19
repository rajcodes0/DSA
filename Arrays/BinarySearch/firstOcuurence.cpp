#include <bits/stdc++.h>
using namespace std;


int firstOccurence(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

while(s <= e){
    if(arr[mid] == key){
        ans = mid;
        e =mid -1;

    }else if(key > arr[mid]){
        s = mid + 1;
    } 
    else if(key < arr[mid]){
        e = mid - 1;

    }
    mid = s+ (e-s)/2;
}

return ans;
   
}


int lastOccurence(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

while(s <= e){
    if(arr[mid] == key){
        ans = mid;
        s = mid + 1;

    }else if(key > arr[mid]){
        s = mid + 1;
    } 
    else if(key < arr[mid]){
        e = mid - 1;

    }
    mid = s + (e-s)/2;
}

return ans;
   
}


int main() {
    int arr[5] ={1,2,3,3,5};
    cout<<"first Occurence is at index  " << firstOccurence(arr,5,3)<<endl;
    cout<<"first Occurence is at index  " << lastOccurence(arr,5,3)<<endl;
    
    return 0;
}


// arr = [1,3,4,5,5,5];

// suppose you want to find all indexes = formula --->

// (last_occurence  - =firt occurence)+ 1 = total occurences
// (5 - 3) + 1 = 2 + 1  = 3