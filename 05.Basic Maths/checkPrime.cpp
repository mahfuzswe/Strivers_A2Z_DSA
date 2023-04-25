// ** Prime Number: exactly two factors 1 & itself

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     // extreme bruteforce approch:
//     int cnt = 0;
//     for (int i = 1; i <= n; i++) // TC: O(n)
//     {
//         if (n % i == 0)
//         {
//             cnt++;
//         }
//     }
//     if (cnt == 2)
//         cout << "true\n";
//     else
//         cout << "false\n";

//     return 0;
// }

// alt approch:
int main()
{
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i * i <= n; i++) // TC: O(sqrt(n))
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
