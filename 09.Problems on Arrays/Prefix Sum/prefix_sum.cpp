/*
                Prefix Sum Technique
            ----------------------------
    
    n = 5;
    
    index: 0  1  2  3  4
    value: 2  4  1  5  10
    prefix:2  6  7  12 22

    Query:
            range:
                    l  r = prefix[r] - prefix[l-1];
                    2  4 = 22 - 6 = 16
                    
                    if(l==0) ans = prefix[r];
                    0  4 = 22

    Time Complexity: Q+n // Q for query    10^5 + 10^5 = 2*10^5     O.O

    whithout prefix sum,
            Time Complexity: Q*n  10^5 * 10^5 = 10^10       ⊙﹏⊙∥

*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    int prefix[n];
    prefix[0] = arr[0];
    
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i]; // previous sum + current value
    }

    int query; cin>>query;
    while(query--){
        int l,r; cin>>l>>r;
        if(l==0) cout<<prefix[r]<<'\n';
        else cout<<prefix[r] - prefix[l-1]<<'\n';
    }

    return 0;
}