// Move all zeros to the end of the array

vector<int> moveZeros(int n, vector<int>a){
    // step-1
    vector<int>temp;
    for(int i=0; i<n; i++){
        if(a[i] != 0){
            temp.push_back(a[i]);
        }
    }

    // step-2
    int nz = temp.size();
    for(int i=0; i<nz; i++){
        a[i] = temp[i];
    }

    // step-3
    for(int i=nz; i<n; i++){
        a[i] = 0;
    }

    return a;
}