#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string findTwosComplement(string binary) {
    int n = binary.length();
    bool foundFirstOne = false;

    // Traverse from right (Least Significant Bit) to left
    for (int i = n - 1; i >= 0; i--) {
        if (!foundFirstOne) {
            if (binary[i] == '1') {
                // We found the first '1'. 
                // We keep it as is and start flipping after this.
                foundFirstOne = true;
            }
        } else {
            // Flip the bits (0 -> 1, 1 -> 0)
            binary[i] = (binary[i] == '0') ? '1' : '0';
        }
    }
    return binary;
}

int main() {
    // Example: 20 in 8-bit binary is 00010100
    string bin = "00010100";
    cout << "Original Binary: " << bin << endl;
    cout << "2's Complement:  " << findTwosComplement(bin) << endl;
    
    return 0;
}