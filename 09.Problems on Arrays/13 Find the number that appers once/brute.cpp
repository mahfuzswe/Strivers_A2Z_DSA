#include<bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int>&a, int n){
    for(int i = 0; i < n; ++i){
        int num = a[i];
        int cnt = 0;

        for(int i = 0; i < n; ++i){
            if(a[i] == num) cnt++;
        }

        if(cnt == 1) return num;
    }
}

int main(){
    int n; cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    int ans = getSingleElement(a, n);
    cout << "the singel element is: " << ans << '\n';

    return 0;
}

// time complexity: O(n^2)

