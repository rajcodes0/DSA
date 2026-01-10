#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int row = 1;
    char value = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << value << " ";
            value = value + 1;
            col++;
        }
        cout << endl;
        row++;
    }
}

// 5
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 