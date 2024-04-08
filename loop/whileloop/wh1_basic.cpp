#include <iostream>
using namespace std;
int main()
{
    // int i = 0;
    // while (i < 5)
    // {
    //     cout << " * ";
    //     i = i + 1;
    // }



    int n, a = 1, b = 1, c;
    cout << "Enter n : ";
    cin >> n;

    cout << a << " ";
    cout << b << " ";

    int i=0;
    while (i < n-2)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        i++;
    }

    return 0;
}