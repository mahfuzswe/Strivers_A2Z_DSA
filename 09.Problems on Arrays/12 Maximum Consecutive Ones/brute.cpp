#include<bits/stdc++.h>
using namespace std;


// maximum consecutive one's
int mxConOnes(int n, vector<int>&a){
    int mx = 0;
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == 1){
            cnt++;
            if(cnt > mx) mx = cnt;
        } 
        else cnt = 0;
    }

    return mx;
}

int main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    int ans = mxConOnes(n, a);

    cout << "no. of one(s): " << ans << '\n';

    return 0;
}