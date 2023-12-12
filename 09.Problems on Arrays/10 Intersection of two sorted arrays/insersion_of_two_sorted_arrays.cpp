// Intersection of two sorted Arrays

// for every element their shoud be 
// co-responding element in other array

#include<bits/stdc++.h>
vector<int>findArrayIntersection(vector<int>&A, int n,
vector<int>&B, int m){
    vector<int>ans;
    int vis[m] = {0};
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(A[i] == B[j] && vis[j] == 0){
                ans.push_back(A[i]);
                vis[j] =1;
                break;
            }
            if(B[j] > A[i]) break;
        }
    }
    return ans;
}