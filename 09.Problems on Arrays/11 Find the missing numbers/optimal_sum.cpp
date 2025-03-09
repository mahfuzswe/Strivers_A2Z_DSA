#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int n){
    int sum = 0;
    for(int i = 0; i < n-1; ++i) sum += a[i];

    int nSum = (n*(n+1))/2;
    return nSum - sum;
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

