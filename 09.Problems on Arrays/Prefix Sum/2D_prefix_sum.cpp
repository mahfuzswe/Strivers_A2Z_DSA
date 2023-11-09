/*
            2D Prefix Sum
          ------------------
      
        arr[3][3];

          1 2 3
          4 5 6
          7 8 9
        
1st work: do prefix sum of first row
2nd work: do prefix sum of first column
3rd work: prefix[i][j] = pre[i][j-1] + prefix[i-1][j] + arr[i][j] - prefix[i-1][j-1]



*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m; // n rows , m columns
  cin>>n>>m;

  int arr[n][m];
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>arr[i][j];
    }
  }

  int prefix[n][m];
  prefix[0][0] = arr[0][0];

  // 1st work
  for(int i=1; i<m; i++){
    prefix[0][i] = prefix[0][i-1] + arr[0][i];
  }

  // 2nd work
  for(int i=1; i<n; i++){
    prefix[i][0] = prefix[i-1][0] + arr[i][0];
  }

  // 3rd work
  for(int i=1; i<n; i++){
    for(int j=1; j<n; j++){
      prefix[i][j] = prefix[i][j-1] + prefix[i-1][j] + arr[i][j] - prefix[i-1][j-1];
    }
  }

  // print
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cout<<prefix[i][j]<<" ";
    }
    cout<<'\n';
  }


  return 0;
}
