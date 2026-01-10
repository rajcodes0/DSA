#include <iostream>
using namespace std;

int decimaltobinary(int decNum){
    int ans =0;
    int power = 1;

    while (decNum >0){
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem +power);
        power = power * 10;
    }
    return ans;
    
}

int main(){
    int decNum = 50;
    cout<<decimaltobinary(decNum) <<endl;
    return 0;
}