#include<bits/stdc++.h>
using namespace std;

//Optimal solution:
// reverse (arr, arr+d) --> O(d)
// reverse (arr+d, arr+n) --> O(n-d)
// reverse (arr, arr+n) --> O(n)
// Overall time complexity: O(2n)
// Space Complexity: O(1)

// Function to reverse an array:
// void Reverse(int arr[], int start, int end){
//     while(start<=end){
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }


int main(){
    int n; cin>>n;
    int d; cin>>d;
    d = d%n; // check above statement
    int arr[n];

    // input a n size array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // there is a 'reverse' STL function in c++
    reverse(arr, arr+d);
    reverse(arr+d, arr+n); // from d th index to (n-1) th index
    reverse(arr, arr+n); // 0th index to last index


    // print left rotate array by d places
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout << '\n';

    return 0;
}


