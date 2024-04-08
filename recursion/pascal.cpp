#include <iostream>
using namespace std;

int pascal(int n, int r)
{
    if (n == 0 || n == r)
    {
        return 1;
    }
    return pascal(n - 1, r) + pascal(n - 1, r-1);
}

int main()
{
    int n = 5;
    int r = 0;
    // for (int i = 0; i> n; i++)
    // {
        int res = pascal(n, r);
        cout<<res;
    // }

    return 0;
}