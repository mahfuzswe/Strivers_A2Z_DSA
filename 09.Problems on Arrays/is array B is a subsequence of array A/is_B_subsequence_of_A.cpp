#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int size, sizeSeq;
    cin>>size>>sizeSeq;

    int arr[size];
    for(int i=0; i<size; i++) cin>>arr[i];

    int arrSeq[sizeSeq];
    for(int i=0; i<sizeSeq; i++) cin>>arrSeq[i];

    int z = 0;
    int counter = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == arrSeq[z]){
            counter++;
            z++;
        } 
    }

    if(counter == sizeSeq) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}