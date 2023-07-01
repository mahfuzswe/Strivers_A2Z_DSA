// pushes the maximum to the last

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = n-1; i>=0; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
        // cout<<"runs\n";
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    bubble_sort(arr,n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<"\n";

    return 0;
}


// Time Complexity: O(n^2)  -> Worst, Avg
// Best --> O(n) if sorted