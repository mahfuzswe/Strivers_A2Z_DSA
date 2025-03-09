#include<bits/stdc++.h>
using namespace std;

int missingNumebr(int n, vector<int>&v){
    for(int i = 1; i <= n; ++i){
        int flg = 0;
        for(int j = 0; j < n-1; j++){
            if(v[j] == i){
                flg = 1;
                break;
            }
        }
        if(flg == 0) return i;
    }
    return -1;
}

int main(){
    int n; cin >> n;
    vector<int>v(n-1);
    for(int i = 0; i < n-1; ++i) cin >> v[i];

    int ans = missingNumebr(n, v);
    cout << "missing numebr: " << ans << '\n';

    return 0;
}

//  Time Complexity: O(N^2) where N = size of the array + 1
