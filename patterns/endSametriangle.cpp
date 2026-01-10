#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >>n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= row){
            cout << row - col + n;
            col++;
        }
        cout<<endl;
        row++;
    }
}

// 5
// 5
// 65
// 765
// 8765
// 98765
