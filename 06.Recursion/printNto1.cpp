// Q: Print linearly from N to 1

#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) // TC -> O(n), SC -> O(n)
{
    if (i < 1) // base case
        return;
    cout << i << " ";
    name(i - 1, n);
}

int main()
{
    int n;
    cin >> n;
    name(n, n);

    return 0;
}