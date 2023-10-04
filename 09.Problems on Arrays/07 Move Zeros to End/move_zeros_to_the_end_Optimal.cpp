// Move all zeros to the end of the array (Optimal approch)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // step-01;
    int j = -1;
    for(int i=0; i<n; i++){ // O(x) : x is the first index where 0 was found
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    // step-02:
    for(int i=j+1; i<n; i++){ // O(n-x)
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    // print array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<'\n';

    return 0;
}

// Overall Time Complexity: O(n)
// Space Complexity: O(1), as we are not using any extra thing