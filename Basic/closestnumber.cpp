#include <iostream>
#include <climits>
using namespace std;


int closer(int m,int n){
    int closest = 0;
    int mingap = INT_MAX;

    for(int i = n - abs(m); i< n+ abs(m); i++){
        if(i % m == 0){
            int gap = abs(n-i);
       
        if(gap < mingap || (gap == mingap && abs(i) > abs(closest))){
             closest = i;
            mingap  = gap;

        }
        
    } }
    cout<<" closest number is :" << closest << ";";
    return closest;
    
}

int main(){
    int m;
    cin >> m;
    int n;
    cin>> n;

    closer(m,n);
    
}
    