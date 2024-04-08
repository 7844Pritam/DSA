#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void explain_vector()
{
    vector<int> vec;  // vector<int> = data type; vcc = name;
    vec.push_back(1); // pushes or insert  element form end;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);
    // vec.emplace_back(4); // faster than push back;

    //  vector<int>v(5); // output = 0 0 0 0 0
    vector<int> v(5, 10); // output = 10 10 10 10 10

    // vector<int>::iterator it = v.begin();
    // or

    auto it = v.begin();
    it = it + 1;
    // cout << *(it);

    // erasing the element
    //  vec.erase(vec.begin());

    vector<int> v1(v); // copying array one array to another array

    vec.insert(vec.begin(), v.begin(), v.end());

    vec.swap(v1);

    // vec.erase(vec.begin() + 2, vec.begin() + 5);

    // for (auto it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout << *it << "  ";
    // }
    vec.clear();
    cout << vec.empty();

    // for (auto it = v1.begin(); it != v1.end(); it++)
    // {
    //     cout << *it << "  ";
    // }
    // cout<<vec.back(); // access the last element
}

int main()
{
    explain_vector();
    return 0;
}