#include <iostream>

using namespace std;
int main()
{

    // int a = 10;
    // int *p;
    // p = &a;
    // cout << *p;

    int a = 10;
    int &r = a;
    cout << r << endl;
    cout << a << endl;
    r++;
    cout << a;
    cout << r;
    return 0;
}