// Union of two sorted arrays (Optimal force approch / two pointer approch)

// Union means no repeatition, just unique elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1; cin>>n1;
    int arr1[n1];
    // input first array
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }

    sort(arr1, arr1+n1);

    int n2; cin>>n2;
    int arr2[n2];
    // input second array
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    sort(arr2, arr2+n2);

    int i=0, j=0;
    vector<int>unionArr;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }else{
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
            unionArr.push_back(arr2[j]);
        }
        j++;
    }

    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
            unionArr.push_back(arr1[i]);
        }
        i++;
    }


    for(int i=0; i<unionArr.size(); i++){
        cout<<unionArr[i]<<" ";
    }cout<<'\n';


    return 0;
}