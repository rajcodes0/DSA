#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int space = 1;
        while (space <= row - 1)
        {
            cout << " ";
            space++;
        }

        int col = 1;
        int count = 1;
        while (col <= n - row + 1)
        {
            cout << row;

            col++;
        }

        cout << endl;

        row++;
    }
    return 0;
}


// 4
// 1111
//  222
//   33
//    4
