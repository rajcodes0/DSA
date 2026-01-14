#include <bits/stdc++.h>
using namespace std;


bool uniqueOccurrences(int arr[],int n) {
    
        int freq[1000];
        int freqSize = 0;

        for (int i = 0; i < n; i++) {

            // skip if arr[i] already processed
            bool alreadySeen = false;
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    alreadySeen = true;
                    break;
                }
            }
            if (alreadySeen) continue;

            // count frequency of arr[i]
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[j] == arr[i]) count++;
            }

            // check if count already exists
            for (int f = 0; f < freqSize; f++) {
                if (freq[f] == count) return false;
            }

            // store frequency
            freq[freqSize] = count;
            freqSize++;
        }

        return true;
        
    };


int main() {

    int arr[]={2,3,4,4,5,5,5,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

  if(uniqueOccurrences(arr,n)){
    cout<< "TRUE: it is unique"<<endl;
  }else{
    cout<<"FALSE: it is not unique array"<<endl;
  }
    return 0;
}
    