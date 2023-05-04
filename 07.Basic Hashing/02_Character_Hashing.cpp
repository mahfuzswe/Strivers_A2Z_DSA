// Q: how many times a character in an array

// bruteforce method

#include <bits/stdc++.h>
using namespace std;

int f(char c, string s)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    string s;
    cin >> s;
    char c;
    cin >> c;
    cout << f(c, s) << endl;

    return 0;
}