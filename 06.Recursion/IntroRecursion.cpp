/*
    ** Recursion **
    -> when a function calls itself
       until a special condition is met. -> Base Condition

    Stack Overflow : when there is numerus function calls
                     waiting due to recursion.
                     it also known as Segmentation fault

    stack space -> stores the yet to be completed ones

*/

#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void print()
{
    if (cnt == 3) // Base Condition
        return;
    cout << cnt << endl;
    cnt++;
    print(); // Recursive Call
}

int main()
{
    print();
}

/*
    ** Recursion Tree **
    f() -> f() -> f() -> f()
        <-     <-     <-

*/