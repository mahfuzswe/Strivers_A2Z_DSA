// Second largest element in an array without sorting

int secondLargest(vector<int>&a, int n){
    int largest = a[0];
    int slargest = -1; // for largest it will work
    for(int i=1; i<n; i++){
        if(a[i] > largest){
            slargest = largest;
            largest = a[i];
        }
        else if(a[i]<largest && a[i] > slargest){
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> &a, int n){
    int smallest = a[0];
    int ssmallest = INT_MAX; // INT_MAX bcz I'm finding smallest
    for(int i=1; i<n; i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = s[i];
        }
        else if(a[i] != smallest && a[i] < ssmallest){
            ssmallest = a[i];
        }
    }
    return ssmallest;

}

vector<int>getSecondOrderElements(int n, vector<int>a){
    int slargest = secondLargest(a, n);
    int ssmallest = secondSmallest(a, n);
    return{slargest, ssmallest};
}