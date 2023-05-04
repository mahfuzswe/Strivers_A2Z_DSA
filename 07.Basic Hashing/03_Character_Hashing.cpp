// Q: how many times a character in an array

// hashing method

/*
    abcdabehf
    5
    a
    g
    h
    b
    c
*/

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     // pre cpmpute
//     int hash[26] = {0}; // just for lowercase letters
//     for (int i = 0; i < s.size(); i++)
//     {
//         hash[s[i] - 'a']++;
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         char c;
//         cin >> c;
//         // fetch
//         cout << hash[c - 'a'] << endl;
//     }

//     return 0;
// }

// if we don't knw we will use 256 , it will take a bigger size but map correctly
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // pre cpmpute
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetch
        cout << hash[c] << endl;
    }

    return 0;
}

// if it doesn't sate about the exclusivity,
// of the character you have to take 256

// for lower case char - 'a'
// for upper case char - 'A'

/*
    hash[] inside its bracket needs an integer,
    so even if you write a character it will auto cast itself
    to a integer value, which is the ASCII value.
    this is why it works
*/