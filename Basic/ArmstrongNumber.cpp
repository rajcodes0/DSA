#include <bits/stdc++.h>
using namespace std;


bool isArmstrong(int n){
    int copyN= n;
    int sum= 0;

    while(n != 0){
        int digit = n % 10;
        sum += (digit * digit * digit);
        
        n = n / 10;
    }
   return sum == copyN;
}

int main() {
    int n = 153;
    if(isArmstrong(n)== true){
        cout<<"It is Armstrong Number;";
    }else{
        cout<<"not a Armstrong Number";
    }
    return 0;
}