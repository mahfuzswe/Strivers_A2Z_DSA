#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    // first pass to find largest
    int Largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>Largest){
            Largest = arr[i];
        }
    }


    // second pass to find second largest
    int sLargest = -1;
    for(int i=0; i<n; i++){
        if(arr[i]>sLargest && arr[i]!=Largest){
            sLargest = arr[i];
        }
    }

    cout<<Largest<<'\n';
    cout<<sLargest<<'\n';

    return 0;
}
