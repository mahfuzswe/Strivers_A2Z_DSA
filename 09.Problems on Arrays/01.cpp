// Largest element in an array

int largestElement(vector<int>&arr, int n){
    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}