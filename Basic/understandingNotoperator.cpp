#include <iostream>
#include <iomanip> // For nice formatting
using namespace std;

int main()
{
    cout << setw(5) << "n" << " | " << "Bitwise (~n)" << " | " << "Formula -(n+1)" << " | " << "Result" << endl;
    cout << "--------------------------------------------------------" << endl;

    for (int n = -5; n <= 5; n++)
    {
        int bitwise_result = ~n;
        int formula_result = -(n + 1);

        cout << setw(5) << n << " | "
             << setw(12) << bitwise_result << " | "
             << setw(14) << formula_result << " | ";

        if (bitwise_result == formula_result)
        {
            cout << "✅ Match!" << endl;
        }
        else
        {
            cout << "❌ No match" << endl;
        }
    }

    return 0;
}