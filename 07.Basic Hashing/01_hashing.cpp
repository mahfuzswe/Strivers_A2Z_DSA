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

/*
if the array has max element till 10^9 , can we declear an array of size of 10^9 + 1?
 the answer is NO .
 the maximum of that you can declear is 10^6 if it is of integer  --> inside main
 but if we declear somewhere globally an array can go till 10^7  --> globally

 for boolean array till 10^7 --> inside main
                   till 10^8 --> globally

*/
