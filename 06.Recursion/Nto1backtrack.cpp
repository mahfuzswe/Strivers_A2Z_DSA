// Q: print from N to 1 by Backtrack [don't use f(i-1,n)]

#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) // TC -> O(n), SC -> O(n)
{
    if (i > n) // base case
        return;
    name(i + 1, n);
    cout << i << " ";
}

int main()
{
    int i, n;
    cin >> i >> n;
    name(i, n);

    return 0;
}
