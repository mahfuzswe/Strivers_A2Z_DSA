#include<bits/stdc++.h>
using namespace std;

// let d = 2

// multiple of d rotation can be done
// it will always brings the original array, the remaining is what you need to do
// d = d%n || n = size of the array

int main(){
    int n; cin>>n;
    int d; cin>>d;
    d = d%n; // check above statement
    int arr[n];

    // input a n size array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // storing d places in temp
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    // shifting
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    // put back temp
    /*
    int j = 0;
    for(int i=n-d; i<n; i++){
        arr[i] = temp[j];
        j++;
    }
    */
    // simple mathematical thinking
    for(int i=n-d; i<n; i++){ // base index: n-d
        arr[i] = temp[i-(n-d)]; // just substract the base index from current index (i)
    }


    // print left rotate array by d places
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout << '\n';


    return 0;
}

// Time Complexity: O(d) + O(n-d) + O(d) = O(n+d)
// Extra space used : O(d) ; as we using a temp array to stroing the extra emelents.