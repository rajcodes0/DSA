#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> arr = {1, 2, 2,3,3,3 };

    unordered_map<int,int> freq;
    

    for (int num:arr){
        freq[num]++;
    }

    // Without &, a copy is created each iteration. 
    for(auto pair :freq){
        cout<<pair.first<<" "<<pair.second<<endl;
    }
    return 0;
}