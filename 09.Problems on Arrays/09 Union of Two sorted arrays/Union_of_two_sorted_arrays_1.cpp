// Union of two sorted arrays (brute force approch)
// add elements of both array, unique
// 'set' contains only unique elements in sorted order

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1; cin>>n1;
    int arr1[n1];
    // input first array
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }

    int n2; cin>>n2;
    int arr2[n2];
    // input second array
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    // step - 01:

    set<int>st;
    for(int i=0; i<n1; i++){ // TC: O(nlog n)
        st.insert(arr1[i]);
    }

    for(int i=0; i<n2; i++){ // TC: O(nlog n)
        st.insert(arr2[i]);
    }

    int Union[st.size()];
    int i=0;
    for(auto it: st){ // O(n1 + n2)
        Union[i++] = it;
    }

    for(auto it: st){
        cout<<Union[it-1]<<" ";
    }cout<<'\n';


    

    return 0;
}
