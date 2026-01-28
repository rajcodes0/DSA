#include <bits/stdc++.h>
using namespace std;

void printDigits(int n){
    int sum = 0;

    while(n != 0){
        int digit = n % 10;
        sum += digit;
        n= n /10;
    }
    cout<<sum;
}

int main() {
    int n = 345;
    printDigits(n)<<endl;
    int)(log10(n+ 1)<<endl;)
    return 0;
} cout<<
