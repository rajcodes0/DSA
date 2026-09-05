#include <bits/stdc++.h>
using namespace std;    


bool searach(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}   
int main(){
    
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin >> key;
    if(searach(arr, size, key)){
        cout << "Found" << endl;
    }else{
        cout << "Not Found" << endl;
    }
}
