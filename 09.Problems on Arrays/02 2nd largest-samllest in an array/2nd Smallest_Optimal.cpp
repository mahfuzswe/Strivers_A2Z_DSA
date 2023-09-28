#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int smallest = arr[0];
    int s_smallest = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            s_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < s_smallest){
            s_smallest = arr[i];
        }
    }

    cout<<s_smallest<<'\n';

    return 0;
}

// Time Complexity: O(N)
