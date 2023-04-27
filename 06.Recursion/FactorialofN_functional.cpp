// Q: Sum of first N number

// functional way

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}
