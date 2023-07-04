// Intersection of two sorted Arrays

#include<bits/stdc++.h>
vector<int>findArrayIntersection(vector<int>&A, int n, vector<int>&B, int m){
    int i=0, j=0;
    vector<int>ans;
    while(i<n && j<m){
        if(A[i]<B[j]){
            i++;
        }else if(B[j]<A[i]){
            j++;
        }else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    return ans;
}