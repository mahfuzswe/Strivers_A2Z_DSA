#include <bits/stdc++.h>
using namespace std;

/*
    # C++ STL divided into 4 types:
    1. Algorithms
    2. Containers
    3. Functions
    4. Iterators
*/

// ** Pairs **
// void explainPairs()
// {
//     pair<int, int> p = {1, 3};
//     cout << p.first << " " << p.second;

//     pair<int, pair<int, int>> p = {1, {3, 4}};
//     cout << p.first << " " << p.second.second << " " << p.second.first;

//     pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
//     cout << arr[1].second;
// }

// ** Vector **
void explainVectors()
{
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(2); // push_back and emplace_back works the same
    // but generally emplace_back is faster than push_back()

    // vector<pair<int, int>> vec;
    // vec.push_back({1, 2});
    // vec.emplace_back(1, 2);

    // vector<int> v(5, 100);

    // vector<int> v(5);

    // vector<int> v1(5, 10);
    // vector<int> v2(v1);

    // iterators point to the memory address

    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(50);

    // vector<int>::iterator it = v.begin();
    // it++;
    // cout << *(it) << " ";

    // it = it + 2;
    // cout << *(it) << " ";

    // vector<int>::iterator it = v.end();  // * end will not point to last elemnt
    // it will point right after last element

    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    // cout << v[0] << " " << v.at(0) << " ";

    // cout << v.back() << " ";

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // cout << endl;

    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }

    // cout << endl;

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    // *** Deletion of vectors ***
    // {10,20,30,50}
    // v.erase(v.begin() + 1);

    // v.erase(v.begin() + 1, v.begin() + 3); // [start,end)

    // *** Insert Function ***

    for (auto it : v)
    {
        cout << it << " ";
    }
}

int main()
{
    // explainPairs();
    explainVectors();

    return 0;
}