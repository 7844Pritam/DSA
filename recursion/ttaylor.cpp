#include <iostream>
using namespace std;

int expo(long long int x, long long int n)
{
    int s;
    for ( ; n < 0; n--)
    {
        s = 1 + x / n * s;
    }
    return s;
}
int main()
{
    int x = 2;
    int n = 2;
    cout << expo(x, n);
    return 0;
}

// long long int expo(long long int x,long long int n)
// {

//     static long long int p = 1;
//     static long long int f = 1;
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         expo(x, n - 1);
//         p = p * x;
//         f = f * n;
//         return 1 + p / f;
//     }
// }

// int main()
// {
//    long long int x = 10;
//     long long int n = 10;
//     cout << expo(x, n);
//     return 0;
// }
