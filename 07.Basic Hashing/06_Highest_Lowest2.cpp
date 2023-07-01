/*
Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.

Example 2:

Input: array[] = {2,2,3,4,4,2};
Output: 2 3
Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.
*/

// Optimized approach(Using map):


#include<bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n){
    unordered_map<int, int>map;
    for(int i=0; i<n; i++){
        map[arr[i]]++;
    }
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    //Traverse through map to find the elements
    for(auto it : map){
        int count = it.second;
        int element = it.first;

        if(count>maxFreq){
            maxEle = element;
            maxFreq = count;
        }
        if(count<minFreq){
            minEle = element;
            minFreq = count;
        }
    }

    cout<<"The highest frequency element is: "<<maxEle<<"\n";
    cout<<"The lowest frequency is: "<<minEle<<"\n";

}


int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    Frequency(arr,n);

    return 0;
}