// Q: Print name n times using Recursion

#include <bits/stdc++.h>
using namespace std;

void name(int i, int n) // TC -> O(n), SC -> O(n)
{
    if (i > n) // base case
        return;
    cout << "mahfuz\n";
    name(i + 1, n);
}

int main()
{
    int i, n;
    cin >> i >> n;
    name(i, n);

    return 0;
}
