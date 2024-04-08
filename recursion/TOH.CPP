#include <iostream>
using namespace std;

void TOH(int n, int a, int b, int c)
{
    static int i = 0;
    if (n > 0)
    {
        TOH(n - 1, a, c, b);
        i = i + 1;
        // cout << i << ",";
        // cout << a << "," << c << " => " << i <<",";
        cout << a << "," << c << " => " << i << endl;
        TOH(n - 1, b, a, c);
    }
}

int main()
{
    int value = 3;
    TOH(value, 1, 2, 3);
    return 0;
}