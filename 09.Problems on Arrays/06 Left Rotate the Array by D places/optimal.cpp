// Left Rotate an Array ny D places , addition right rotate
// Optimal Solution

#include<bits/stdc++.h>
using namespace std;

int main(){
    void leftRotate(int arr[], int n, int d){
        reverse(arr, arr+d);
        reverse(arr+d, arr+n);
        reverse(arr, arr+n);
    }

    void right_rotate(int arr[],int n,int d){
        reverse(arr,arr+n-d);
        reverse(arr+n-d,arr+n);
        reverse(arr,arr+n); 
    }


    int main(){
        int n; cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int d; cin>>d;
        leftRotate(arr, n, d);

        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    return 0;
}