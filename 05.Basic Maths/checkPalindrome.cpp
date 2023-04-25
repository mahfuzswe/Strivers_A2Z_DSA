#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp = n;
    int revN = 0;
    while (temp > 0)
    {
        int ld = temp % 10;
        revN = (revN * 10) + ld;
        temp /= 10;
    }
    if (revN == n)
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}