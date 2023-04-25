#include <bits/stdc++.h>
using namespace std;

// using extraction of digit method

// TC --> O(log10(n))

// if the division is happening by 10, TC -> log base 10
// if the division is happening by 5, TC -> log base 5

//*** Remember: If the number of iteration is based on division,
// time complexity will be logarithmic

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    while (n > 0)
    {
        int lastDigit = n % 10; // if the division is happening by 10 ,TC-> log base 10
        cnt += 1;
        n = n / 10;
    }

    cout << cnt << endl;

    return 0;
}

// int main() {
//     int n; cin >> n;
//     int cnt = 0;
//     while (n > 0)
//     {
//         cnt += 1;
//         n = n / 10;
//     }
//     cout << cnt << endl;
//     return 0;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int cnt = (int)(log10(n) + 1);
//     cout << cnt << endl;
//     return 0;
// }
