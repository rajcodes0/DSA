#include <bits/stdc++.h>
using namespace std;

int sumofconsecutives(int n){
for(int i  = 0; i < n; i++){
    int sum  = 0;
    for(int j = i; j < n; j++){
        sum += j;
        if(sum == n && j > i){
            cout<< "It is a consecutive plus number" ;
            return true;
        }
        if(sum > n ){
            break;
        } } }

 return false;
   
};

int main() {
    int n;
    cin >> n;
    cout<< sumofconsecutives(n)<< "---" ;
    return 0;
}