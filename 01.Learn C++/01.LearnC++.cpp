#include <bits/stdc++.h>
using namespace std;

// int, long, long long, float, double
// string and getline

// string s1, s2;
// cin >> s1 >> s2;
// cout << s1 << " " << s2;

// string str;
// getline(cin, str);

// cout << str << endl;

// char
//

// int day;
// cin >> day;
// switch (day)
// {
// case 1:
//     cout << "Saturday\n";
//     break;

// case 2:
//     cout << "Sunday\n";
//     break;
// case 3:
//     cout << "Monday\n";
//     break;
// case 4:
//     cout << "Tuesday\n";
//     break;
// }

// int a,b,c,d;
// cin>>a>>b>>c>>d;

// 1D Array

// int arr[5];
// cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

// arr[3] += 10;
// cout << arr[3];

// 2D Array
// int arr[3][5];

// arr[1][3] = 78;
// cout << arr[1][3];

// string s = "Striver";
// int len = s.size();
// s[len - 1] = 'o';
// // cout << s[4];
// cout << s[len - 1];

// for loop

// cout << "Shanto" << endl;
// cout << "Shanto" << endl;
// cout << "Shanto" << endl;
// cout << "Shanto" << endl;
// cout << "Shanto" << endl;
// int i;
// for (i = 1; i <= 10; i++)
// {
//     cout << "Shanto" << endl;
// }
// cout << i << endl;

// for (int i = 5; i >= 0; i--)
// {
//     cout << "Shanto" << i << endl;
// }

// while loop
// int i = 1;
// while (i <= 5)
// {
//     cout << "Shanto" << i << endl;
//     i++;
// }

// do while loop
// int i = 2;
// do
// {
//     cout << "Shanto" << i << endl;
//     i++;
// } while (i <= 1);
// cout << i << endl;

// **** Functions ****
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times

// void --> doesn't return anything
// return
// parameterised
// non parameterised

// void printName(string name)
// {
//     cout << "hey " << name << endl;
// }

// string name;
// cin >> name;
// printName(name);

// string name2;
// cin >> name2;
// printName(name2);

// take two numbers and print its sum
// int sum(int num1, int num2)
// {
//     int num3 = num1 + num2;
//     return num3;
// }

// cout << num1 + num2;
// int res = sum(num1, num2);
// cout << res << endl;

// int maxx(int num1, int num2)
// {
//     if (num1 > num2)
//         return num1;
//     else
//         return num2;
//     // looking for a return
// }

//  int num1, num2;
//     cin >> num1 >> num2;

//     int maximum = maxx(num1, num2);
//     cout << maximum;

// pass by value
// void doSomething(int num) --> get the copy value
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

//  int num = 10;
//     doSomething(num);
//     cout << num << endl;

// void doSomething(string s)
// {
//     s[0] = 'p';
//     cout << s << endl;
// }

// int main()
// {

//     string s = "Shanto";
//     doSomething(s);
//     cout << s << endl;

//     return 0;
// }

// ** Pass by reference **

// void doSomething(string &s) //--> get the original value
// {
//     s[0] = 'P';
//     cout << s << endl;
// }

// int main()
// {
//     string s = "Shanto";
//     doSomething(s);
//     cout << s << endl;

//     return 0;
// }

// pass by refference
// void doSomething(int &num)
// {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main()
// {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;

//     return 0;
// }

// int main()
// {
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

//     cout << arr[0] << endl
//          << arr[1] << endl
//          << arr[2];

//     return 0;
// }

// array always pas by reference
void doSomething(int arr[], int n)
{
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main()
{
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    doSomething(arr, n);

    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
}