
#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

vector <int> hashTable[10];

void findTarget(int target){
int index = target % 10;

for(int val :hashTable[index]){
    if(val == target){
        cout<< "i found it" ;
        return;

    }

}
cout<< "not found" ;
}


int main() {

    int arr2[] = {27, 17, 37, 8, 18};

    // Put elements into hash table
    for (int val : arr2) {
        int index = val % 10;
        hashTable[index].push_back(val);
    }

    findTarget(37);

    return 0;
}