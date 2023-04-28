// Q: Sum of first N number

// functional way

#include <bits/stdc++.h>
using namespace std;

int summation(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + summation(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << summation(n) << endl;

    return 0;
}
