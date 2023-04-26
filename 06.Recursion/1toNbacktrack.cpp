// Q: Print linearly from 1 to N not using f(i+1, n)

// by Backtracking

#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) // TC -> O(n), SC -> O(n)
{
    if (i < 1) // base case
        return;
    name(i - 1, n);
    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;
    name(n, n);

    return 0;
}