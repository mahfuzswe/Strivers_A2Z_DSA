#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){

    if(start > end) return -1;
    int mid = (start + end) / 2;
    if(arr[mid] == target) return mid;
    else if(target > arr[mid]){
        binarySearch(arr, mid+1, end, target);
    }
    else binarySearch(arr, start, mid-1, target);
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target; cin>>target;
    int start = 0;
    int end = n-1;

    cout<<binarySearch(arr, start, end, target)<<'\n';

    return 0;
}