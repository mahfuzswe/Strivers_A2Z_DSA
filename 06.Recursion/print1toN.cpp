// Q: Print linearly from 1 to N

#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) // TC -> O(n), SC -> O(n)
{
    if (i > n) // base case
        return;
    cout << i << " ";
    name(i + 1, n);
}

int main()
{
    int i, n;
    cin >> i >> n;
    name(i, n);

    return 0;
}