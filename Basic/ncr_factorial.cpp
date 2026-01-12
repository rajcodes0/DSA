#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    return num / denominator;
   
}

int main(){

    int n ;
    cin>> n;
    int r;
    cin>> r;
    cout<<"answer is "<< nCr(n,r)<<endl;
    return 0;

}




// defination 
/*   
The NCR formula is used to find the count of all possible combinations of n
 distinct objects, taken r
 at a time. It is generally denoted by C(n,r)
 or, nCr
 and can be given by the formula,

=>nCr= n!/r!(n−r)!

n is the number of distinct object among which selections is to be made, and 
r is the number of objects to be selected out of n distinct objects at a time 
Note: nCr
 is defined only when n and r are non-negative integers such that 0≤r≤n
.*/