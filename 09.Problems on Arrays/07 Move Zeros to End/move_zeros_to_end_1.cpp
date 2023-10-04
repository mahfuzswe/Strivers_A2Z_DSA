// Move all zeros to the end of the array (brute force approch)
#include<bits/stdc++.h>
using namespace std;

// Brute Force Approch: first iterate stores all the non zero numbers
// then put all the non zero numbers to the front and then fill the remaining 
// places with zeros.

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // step -01:
    int temp[]; // to store all non zero numbers
    for(int i=0; i<n; i++){ // TC: O(N)
        if(arr[i] != 0){
            temp[i] = arr[i];
        }
    }

    //step-02: pick up everything from the temporary and put it into the front of the arry
    for(int i=0; i<temp.size(); i++){ // TC: O(X)
        arr[i] = temp[i];
    }

    // step-03: fill up zeros in the end
    int nz = temp.size(); // nz = number of non-zero elements
    for(int i=nz; i<n; i++){ // TC: O(N-X)
        arr[i] = 0;
    }

    // print the array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<'\n';

    return 0;
}

// Time Complexity: O(N) + O(X) + O(N-X) = O(2N)
// the extra space using : O(x) ; x is the numebr of non-zero elements
// in wrost case it will be O(N)