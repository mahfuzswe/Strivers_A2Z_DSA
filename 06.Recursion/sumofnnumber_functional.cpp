// Q: Sum of first N number

// functional way

#include <bits/stdc++.h>
using namespace std;

int summetion(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + summetion(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << summetion(n) << endl;

    return 0;
}
