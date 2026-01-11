#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    if(n > 0 && (n & (n - 1)) == 0){
        cout<<"Yes ,power of 2";
    }else{
        cout<<"No ,not power of 2";
    }
    return 0;
}



// Binary understanding (VERY IMPORTANT)

// Power of 2 numbers have:

// Only ONE 1 in binary

// Number	Binary
// 1	1
// 2	10
// 4	100
// 8	1000
// 16	10000