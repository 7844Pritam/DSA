#include <iostream>
using namespace std;

int factorial(int n)
{

    if (n == 0 || n == 1)
    {

        return 1;
    }
    else
    {
        return factorial(n - 1) * n;
    }
}

int main()
{
    int n = 3;
    int r = 2;

    int a = factorial(n);
    int b = factorial(r);
    int c = factorial(n - r);

    int ncr = a / (b * c);
    cout << ncr;

    return 0;
}

// **
// **
// **
// **
// **
// **
// **
// **
// **


// int fibo(int n)
// {
//     if (n == 0 || n == 1)
//     {
//         return n;
//     }

//     return fibo(n - 1) + fibo(n - 2);
// }

// int main()
// {
//     int n = 7;
//     for (int i=0; i < n; i++)
//     {
//         cout << fibo(n);
//     }
//     return 0;
// }

// **
// **
// **
// **
// **
// **
// **
// **
// **


// int expo(int m, int n)
// {

//     if (n == 0)
//     {
//               return 1;
//     }
//       if (n == 0)
//         {
//             return expo(m * m, n / 2);
//         }
//         else
//         {
//             return m * expo(m * m, n / 2);
//         }
// }

// int main()
// {
//     int n = 11;
//     int m = 2;
//     cout << expo(m, n);
//     return 0;
// }

// **
// **
// **
// **
// **
// **
// **
// **
// **

// int expo(int m, int n)
// {

//     if (n == 0)
//     {

//         return 1;
//     }
//       if (n % 2 == 0)
//         {

//             return expo(m * m, n / 2);
//         }
//         else
//         {
//             return m * expo(m * m, n / 2);
//         }
// }

// // find the exponential of e to the power of x up to that number

// int main()
// {
//     int n = 11;
//     int m = 2;
//     cout << expo(m, n);
//     return 0;
// }

// **
// **
// **
// **
// **
// **
// **
// **
// **

// int expo(int m, int n)
// {

//     if (n == 0)
//     {

//         return 1;
//     }
//     else
//     {
//         return expo(m, n - 1) * m;
//     }
// }

// int main()
// {
//     int n = 3;
//     int m = 4;
//     cout << expo(m, n);
//     return 0;
// }

// **
// **
// **
// **
// **
// **
// **
// **
// **

// int factorial(int n)
// {

//     if (n == 0 || n == 1)
//     {

//         return 1;
//     }
//     else
//     {
//         return factorial(n - 1) * n;
//     }
// }

// int main()
// {
//     int n = 5;
//     cout << factorial(n);
//     return 0;
// }
