#include <bits/stdc++.h>
using namespace std;


bool hasDuplicates(vector<int>& arr){
    unordered_map<int,int> mp;

    for(int  num :arr){
        if(mp.find(num) != mp.end()){
            return true;
        }
        mp[num]++;
    }
    return false;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    if(hasDuplicates(arr)){
        cout<<"Duplicates found"<<endl;
    }
    else{
        cout<<"No duplicates found in thsi oo"<<endl;
    }
    return 0;
}