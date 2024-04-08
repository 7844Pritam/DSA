#include <iostream>
using namespace std;

void isRectangle(int a, int b, int c, int d)
{
    if (a == c && b == d || d == b && a == c || c == a && b == d || b == d && a == c)
    {
        cout << "RECTANGLE";
    }
    else
    {
        cout << "NOT RECTANGLE";
    }
}

int main()
{
    int p, q, r, s;
    cout << "Enter sides:";
    cin >> p;
    cin >> q;
    cin >> r;
    cin >> s;
    isRectangle(p, q, r, s);

    return 0;
}