#include <bits/stdc++.h>
using namespace std;


int binarySearch(int n){
    int start = 0;
    int end = n;
    long long mid;
    int ans = 0;

    while(start <= end){
        mid = start + (end - start)/2;
        long long square = mid * mid;

        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n = 8;
    cout<<binarySearch(n)<<endl;
    return 0;
}