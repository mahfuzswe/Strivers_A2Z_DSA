// Union of two sorted array

#include<bits/stdc++.h>

vector<int>sortedArray(vector<int>a, vector<int>b){
    int n1 = a.size();
    int n2 = b.size();
    set<int>st;
    for(int i=0; i<n1; i++){
        st.insert(a[i]);
    }
    for(int i=0; i<n2; i++){
        st.insert(b[i]);
    }
    vector<int>temp;
    for(auto it: st){
        temp.push_back(it);
    }

    return temp;
}