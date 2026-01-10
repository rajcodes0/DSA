#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int i = 1;
   while(i <= n){
    int col = 1;
    while(col <= n){
        char ch = 'A' + col -1;
        cout<<ch;
        col++;
    }
    cout<<endl;
    i++;
   } 
   
}