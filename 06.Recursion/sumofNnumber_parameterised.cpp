// Q: Sum of first N number

// using parameter

#include <bits/stdc++.h>
using namespace std;

void summetion(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    summetion(i - 1, sum + i);
}

int main()
{
    int n;
    cin >> n;
    summetion(n, 0);

    return 0;
}
