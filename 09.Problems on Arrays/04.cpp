// remove duplicate in-place from sorted array

int removeDuplicates(vector<int> &arr, int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

// time complexity: O(N)
// space complexity: O(1)