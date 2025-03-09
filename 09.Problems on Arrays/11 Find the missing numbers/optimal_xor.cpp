#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int n){
    int xor1 = 0, xor2 = 0;

    for(int i = 0; i < n-1; ++i){
        xor2 = xor2 ^ a[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); // XOR up to [1..N-1]
    }
    xor1 = xor1 ^ n; // XOR upto [1..N]

    return (xor1 ^ xor2);
}

int main(){
    int n; cin >> n;
    vector<int>a(n-1);
    for(int i = 0; i < n-1; ++i) cin >> a[i];

    int ans = missingNumber(a, n);
    cout << "missing number: " << ans << '\n';

    return 0;
}

// Time complexity: O(n)

