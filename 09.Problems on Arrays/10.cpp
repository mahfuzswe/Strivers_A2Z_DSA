// Linear Search

// #include<bits/stdc++.h>
// using namespace std;

// int main(){


//     return 0;
// }

int linearSearch(int n, int num, vector<int>&arr){
    for(int i=0; i<num; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}