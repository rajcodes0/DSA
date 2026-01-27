#include <bits/stdc++.h>
using namespace std;

void sieve(vector<int> &v) {
    int n = v.size();
    
    // Step 1: Assume all are prime (1)
    fill(v.begin(), v.end(), 1); 
    
    // Step 2: 0 and 1 are not prime
    if (n > 0) v[0] = 0;
    if (n > 1) v[1] = 0;

    for (int i = 2; i * i < n; i++) { // Optimization: stop at sqrt(n)
        if (v[i] == 1) {
            // Step 3: Mark multiples of i as not prime (0)
            for (int j = i * i; j < n; j += i) { 
                v[j] = 0; // Fixed: Assignment '=' instead of '=='
            }
        }
    }
}

int main() {
    // Vector size 31 to include index 30
    vector<int> v(31); 
    sieve(v);

    cout << "Primes up to 30: " << endl;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) cout << i << " ";
    }
    return 0;
}