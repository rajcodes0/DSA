#include <bits/stdc++.h>
using namespace std;


bool isPower(int n){
    if(n <= 0 || n % 2 != 0) return false;
    while(n % 2 == 0)
    n /= 2;
    return true;
}



int main() {
if(isPower(7)){
    cout<< "yes,power of 2"<<endl;
}else{
cout<<"false,power of 2" <<endl;
}}