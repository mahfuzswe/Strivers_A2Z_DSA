// Q: Check if a string is paliendrome or not
// palinedrome: a string on reversal reads the same
// Ex: "MADAM" --reverse--> "MADAM"
//     "11211" --reverse--> "11211"

#include <bits/stdc++.h>
using namespace std;

bool f(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;

    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return f(i + 1, s);
}

int main()
{
    string s;
    cin >> s;
    cout << f(0, s) << endl;

    return 0;
}
