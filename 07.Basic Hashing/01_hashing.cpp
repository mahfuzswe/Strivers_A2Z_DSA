/*
Q: size
   array
   test case
   how many times they are appear
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0}; // size 13 bcz here last arry index is 12
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int t;
    cin >> t;
    while (t--)
    {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }

    return 0;
}
