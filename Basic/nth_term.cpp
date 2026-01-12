#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, d, n;
    
    cin >> a >> d >> n;  
    int nthTerm = a + (n - 1) * d;
    
    cout << nthTerm << endl;
    
    return 0;
}


// Arithmetic Progression Formula

// n-th term of AP:

// aₙ = a + (n − 1) × d