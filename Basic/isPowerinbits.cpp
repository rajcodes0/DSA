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


#include <iostream>
using namespace std;

// C++ program to check whether a number
// can be expressed as sum of consecutive numbers
bool isSumOfConsecutive(int n)
{

    // 1 cannot be represented
    if (n == 1)
    {
        return false;
    }

    // Check if n is power of 2
    if ((n & (n - 1)) == 0)
    {
        return false;
    }

    return true;
}

// Driver code
int main()
{
    int n = 10;
    if (isSumOfConsecutive(n))
        cout << "true";
    else
        cout << "false";
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