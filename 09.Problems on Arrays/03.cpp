// check if the array is sorted
 
int isSorted(int n, vector<int>a){
    for(int i=1; i<n; i++){ // TC-> O(N)
        if(a[i] >= a[i-1]){

        }else{
            return false;
        }
    }
    return true;
}