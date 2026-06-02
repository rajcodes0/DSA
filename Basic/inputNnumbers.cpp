 #include <bits/stdc++.h>
 using namespace std;

 
 int main() {
     int n ;
     cout<<"enter the number ";
     cin >> n;

     vector<int> arr;
     for ( int i = 0 ; i < n ;i++){
        int x;
        cin>> x;
        arr.push_back(x);
     }

     for (int i = 0 ; i< arr.size() ; i++){
        cout <<arr[i]<<"";
     }
     
 }