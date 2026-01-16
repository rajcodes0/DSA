#include <bits/stdc++.h>
using namespace std;

void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i = 0; i < size1; i++){
        int element = input1[i];

        for(int j = 0; j < size2; j++){
            if(element == input2[j]){
                cout << element << " ";
                input2[j] = -1;
                break;
            }
        }
    }
}

int main() {
    int input1[]={2 ,6 ,8, 5 ,4,3};
    int input2[] ={2, 6, 4, 7,8,8,5 };
    int size1 = sizeof(input1)/sizeof(input2[0]);
    int size2 = sizeof(input1)/sizeof(input1[0]);
    intersection( input1,input2,size1,size2);
   return 0;
}


//  intersectionOfTwoarrays && ./intersectionOfTwoarrays
// 2 6 8 4 %   