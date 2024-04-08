#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //             cout << j <<" ";
    //     }
    //     cout << endl;
    // }

    //  *
    //  **
    //  ***
    //  ****
    //  *****

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    // char k = 97;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {

    //         cout << k << " ";
    //     }
    //     k = k + 1;
    //     cout << endl;
    // }

    // a
    // b b
    // c c c
    // d d d d
    // e e e e e

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n - row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = row; col >= 1; col--)
    //     {

    //         cout << col;
    //     }
    //     // cout << " ";

    //     cout << endl;
    // }

    //       1
    //    21
    //   321
    //  4321
    // 54321

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n - row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 1; col <= 2 * row - 1; col++)
    //     {
    //         cout << col;
    //     }

    //     cout << endl;
    // }

    //           *
    //          ***
    //         *****
    //        *******
    //       *********
    //      ***********

    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n - row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << col;
    //     }
    //     for (int col = row - 1; col >= 1; col--)
    //     {
    //         c out << col;
    //     }

    //     cout << endl;
    // }

    //      1
    //     121
    //    12321
    //   1234321
    //  123454321
    // 12345654321

    for (int row = 1; row <= n; row++)
    {
        for (int col = n; col >= 1; col--)
        {
            cout << "*";
        }
        for (int spa = row - 1; spa <= n - 1; spa++)
        {
            cout << " ";
        }

        cout << endl;
    }

    //      1
    //     121
    //    12321
    //   1234321
    //  123454321
    // 12345654321

    return 0;
}