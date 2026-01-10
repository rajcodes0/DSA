#include <bits/stdc++.h>
using namespace std;

string word[] = {"volvo", "volvo", "volvo", "maruti"};
int n = 4;

void printword()
{
    for (int i = 0; i < n; i++)
    {
        cout << word[i] << endl;
        for (int j = 0; j < word[i].length(); j++)
        {
            cout << word[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    printword();
    return 0;
}
