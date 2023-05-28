/*
 ** Hashing Basics **
    -> Hashing is something like prestoring and fetching
    it store something and fetch when it want

 */

// Q: how many times does a number apperar in an array

// brute force method

#include <bits/stdc++.h>
using namespace std;

int f(int n, int arr[])
{
    int cnt = 0;
    for (int i = 0; i < 5; i++) // TC-> O(n), for 5 numbers (5xO(n))
    {
        if (arr[i] == n)
        {
            cnt++;
        }
    }
    return cnt;

    int main()
    {
        int n;
        cin >> n;
        int arr[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }

        cout << f(n, arr) << endl;

        return 0;
    }
