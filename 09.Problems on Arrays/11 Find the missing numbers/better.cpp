#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int n){
    int hash[n+1] = {0}; // hash array

    // storing the frequencies:
    for(int i = 0; i < n-1; ++i)
        hash[a[i]]++;
    
    // checking the frequencies for numbers 1 to n:
    for(int i = 1; i <= n; ++i){
        if(hash[i] == 0)
            return i;
    }

    return -1; // to avoid warning
}

int main(){
    int n; cin >> n;
    vector<int>a(n-1);
    for(int i = 0; i < n-1; ++i) cin >> a[i];


    int ans = missingNumber(a, n);
    cout << "missing numebr: " << ans << '\n';

    return 0;
}

// time complexity: O(n) + O(n) = O(2n)