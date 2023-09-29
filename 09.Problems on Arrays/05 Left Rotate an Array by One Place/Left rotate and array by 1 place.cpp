#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';

    return 0;
}


// Time Complexity: O(N)
// Space Complexity for this array : O(N)
// As it using this array

// Extra space complexity: O(1)
// As it isn't using nay extra array/something
