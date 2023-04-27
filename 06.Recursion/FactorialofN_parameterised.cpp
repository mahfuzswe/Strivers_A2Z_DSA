#include <bits/stdc++.h>
using namespace std;

void factorial(int i, int fact)
{

    if (i == 0)
    {
        cout << fact;
        return;
    }
    factorial(i - 1, fact * i);
}

int main()
{
    int n;
    cin >> n;
    factorial(n, 1);
    return 0;
}
