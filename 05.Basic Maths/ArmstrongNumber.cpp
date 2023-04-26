/*
    **Armstrong Number**
    n = 371 = 3^3 + 7^3 + 1^3 = 371
    n = 1634= 1^4 + 6^4 + 3^4 + 4^4 = 1634


*/

#include <bits/stdc++.h>
using namespace std;
bool ArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumofpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumofpower += pow(digit, count);
        n /= 10;
    }
    return (sumofpower == originalno); // returns true or false
}
int main()
{
    int n;
    cin >> n;
    if (ArmstrongNumber(n))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }
    return 0;
}
