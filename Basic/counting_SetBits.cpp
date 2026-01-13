#include <bits/stdc++.h>
#include <bitset>
using namespace std;


/* 
int main() {
    int n;
    cin >> n;

    bitset<32> binaryForm(n);  // store original number

    int count = 0;
    int temp = n;

    while (temp > 0) {
        temp = temp & (temp - 1);  // remove one set bit
        count++;
    }

    cout << "binary: " << binaryForm << endl;
    cout << "set bits: " << count << endl;

    return 0;
}
 */

int main() {
    int n;
    cin >> n;

    int count = 0;
    int temp = n;   // keep original n safe

    while (temp > 0) {
        temp = temp & (temp - 1);  // remove one set bit
        count++;
    }

    cout << "set bits: " << count << endl;
    return 0;
}

/* 
n = 13
binary = 1101
Loop steps:

| Step | temp      | temp-1    | temp&(temp-1) |
| ---- | --------- | --------- | ------------- |
| 1    | 13 (1101) | 12 (1100) | 12 (1100)     |
| 2    | 12 (1100) | 11 (1011) | 8  (1000)     |
| 3    | 8  (1000) | 7  (0111) | 0  (0000)     |

set bits: 3*/

