/*
    *** Euclidean Algorithm ***

    n1,n2

    gcd(n1,n2) = gcd(n1-n2, n2); n1>n2
    gcd(a,b) = gcd(a-b, b); a>b

    15,20 -> gcd: 5

    gcd(20,15) = gcd(20-15, 15)
         5     = gcd(5, 15) = 5

    gcd(15, 5) = gcd(15-5, 5) = gcd(10,5) = gcd(5,5) = gcd(0,5) -> gcd = 5

    gcd(52,10) -> gcd(42,10) -> gcd(32,10) -> gcd(22,10) -> gcd(12,10) -> gcd(2,10)
    -> gcd(10,2) -> gcd(8,2) -> gcd(4,2) -> gcd(2,2) -> gcd(0,2) -> gcd: 2

    ** gcd(52,10) --(52%10, 10)--> gcd(2,10)
       gcd(10,2) --(10%2, 2)--> gcd(0, 2)

    So we can say,

    a, b; a>b

    gcd(a,b) == gcd(a%b, b)

    greater%smaller --> go on till one of them is 0
    if one of them is 0, the other is GCD


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << b << endl;
    else
        cout << a << endl;

    return 0;
}

// TC-> O(log phai min(a,b))

// base phai cz I don't knw that is a & b exactly
// depending on differnet example it will fractuated

// whenever there is division happening the number
// of iterations will be in terms of logarithmic
