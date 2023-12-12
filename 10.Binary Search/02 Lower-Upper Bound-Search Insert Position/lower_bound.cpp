// lower bound: smallest index such that arr[mid] >= x

/*
    arr[] = {3, 5, 8, 15, 19}  n=5
             0  1  2  3   4

    x = 8        x = 9
    lb= 2        lb= 3  cz 15 is greater than or qual to 9

    x = 16
    lb = 4 cz 19 is greater than 16

    x = 20
    lb = 5; in this case lower bound will be last hypothetical index of the array
            the size of the array

    
     arr[] = {3, 5, 8, 15, 19, 19, 19}  n=7
              0  1  2   3   4   5   6

    if x = 19
    what will be the lower bound?
    lb = 4 cz 4 is the smallest index of 19



    Pesudeo:
    ---------------------

    f(arr, target, n){
        low = 0, high = n-1;
        ans = n;
        while(low <= high){
            mid = (low + high)/2;
            
            if(arr[mid] >= target){
                ans = mid;
                high = mid - 1;

            }
            else {
                low = mid +1;
            }
        }
        return ans;
    }

*/


#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int  n, int target){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high) / 2;

        // maybe an answer
        if(arr[mid] >= target){
            ans = mid;

            //look for more small index on left
            high = mid - 1;
        }
        else{
            low = mid + 1; // look for right
        }
    }
    return ans;
}

int main(){
    int n; cin>>n; // size of the array
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    int target; cin>>target;

    cout<<lowerBound(arr, n, target)<<'\n';

    return 0;
}