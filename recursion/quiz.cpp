#include <iostream>
using namespace std;

int fun(int n)
{
    int x = 1, k;
    if (n == 1)
    {
        return x;
    }
    for (k = 1; k < n; ++k)
    {
        x = x + fun(k) * fun(n - k);
    }
    return x;
}

int main()
{
    cout << fun(3);

    return 0;
}
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .4
// void foo(int n, int sum)
// {
//     int k = 0, j = 0;
//     if (n == 0)
//     {
//         return;
//     }
//     k = n % 10;
//     j = n / 10;
//     sum = sum + k;
//     foo(j, sum);
//     cout << k;
// }

// int main()
// {
//     int a = 2028, sum = 0;
//     foo(a, sum);
//     cout<<sum;
//     return 0;
// }
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .3
// int f(int &x, int c)
// {
//     c = c - 1;
//     if (c == 0)
//     {
//         return 1;
//     }
//     x = x + 1;
//     return f(x, c) * x;
// }

// int main()
// {
//     int p = 5;
//     cout << f(p, p);
//     return 0;
// }
// // .
// // .
// // .
// // .
// // .
// // .
// // .
// // .
// // .
// // .
// // .
// // .2
// int fun(int n)
// {
//     int x = 1, k;
//     if (n == 1)
//     {
//         return x;
//     }
//     for (k = 1; k < n; ++k)
//     {
//         x = x + fun(k) * fun(n - k);
//     }
//     return x;
// }

// int main()
// {
//     int value = fun(3);
//     cout << value;
//     return 0;
// }
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .
// .1
// void count(int n)
// {
//     static int d = 1;
//     cout << n;
//     cout << d;
//     d++;
//     if (n > 1)
//     {
//         count(n - 1);
//     }
//     cout << d;
// }

// int main()
// {

//     count(3);
//     return 0;
// }