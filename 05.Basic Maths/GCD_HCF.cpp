// GCD -> greatest common divisor
// or HCF -> highest common factor

//(20,40) -> gcd: 20
// *For two given numbers one of them can also be a gcd
// of those two given number

// the largest divisor that divide both of them will be the gcd

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    for (int i = min(n1, n2); i >= 1; i--) // O(min(n1,n2))
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << "gcd is " << i << endl;
            break;
        }
    }
    return 0;
}