#include <bits/stdc++.h>
using namespace std;


int sqrtInteger(int n){
    int start = 0;
    int end = n;
    long long mid;
    int ans = 0;

    while(start <= end){
        mid = start + (end - start)/2;
        long long square = mid * mid;

        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}


double moreprecision(int n,int precision,int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i<precision;i++ ){
        factor = factor/10;
        for(double j = ans; j * j < n;j= j+ factor){
            ans = j;
        }
    
    }
    return ans;
}

int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout<<"Answer is "<< moreprecision(n,3,tempSol)<<endl;
    return 0;
}