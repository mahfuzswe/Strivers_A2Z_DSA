#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    int sndLargest = -1;

    for(int i=n-2; i>=0; i--){
        if(arr[i] != arr[n-1]){
            sndLargest = arr[i];
            break;
        }
    }
    cout<<sndLargest<<'\n';

    return 0;
}
