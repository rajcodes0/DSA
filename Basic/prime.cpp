#include <iostream>
using namespace std;


void  prime(int n){
    for (int i = 2;i <=(n-1);i++){
        if(n % i == 0){
            cout<<"non prime"<<endl;
            break;
        }else{
            cout<<"prime"<<endl;
        }}
};
int main(){

    prime(8);
};