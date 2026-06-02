#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int revnum = 0;
    int temp = n;

    while(n> 0){
        int id =  n% 10;
        revnum = (revnum * 10) + id;
        n =n/10;

    }
    if(revnum == temp){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not a Palindrome Number"<<endl;
    }
    return 0;
}