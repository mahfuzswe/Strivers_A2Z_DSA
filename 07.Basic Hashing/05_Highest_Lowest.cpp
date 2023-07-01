/*Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.
*/

#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n){
    vector<bool> visited(n,false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for(int i=0; i<n; i++){
        //skip this element if already processed
        if(visited[i]==true) continue;

        //count frequency
        int count = 1;
        for(int j =i+1; j<n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        if(count>maxFreq){
            maxEle = arr[i];
            maxFreq = count;
        }
        if(count<minFreq){
            minEle = arr[i];
            minFreq = count;
        }
    }
    cout<<"The highest frequency element is: "<<maxEle<<"\n";
    cout<<"The lowest ferquency element is: "<<minFreq<<"\n";
}


int main(){
    int arr[] ={10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    countFreq(arr,n);

    return 0;
}