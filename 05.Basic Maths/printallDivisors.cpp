#include <bits/stdc++.h>
using namespace std;

void printDivisors(int n) // O(n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

void OptimizedDivisors(int n) // O(sqrt(n))
{
    vector<int> ls;
    for (int i = 1; i * i <= n; i++) // we can write i*i <= n insted of i <= sqrt(n)
    // 6 * 6 <= 36
    // 7 * 7 <= 36 false
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    // O(n long n); is is the number of factors
    sort(ls.begin(), ls.end());
    // O(no of factors) --> TC

    // now print this!
    for (auto it : ls)
        cout << it << " ";
}

int main()
{
    int n;
    cin >> n;
    printDivisors(n);

    return 0;
}