#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter n" << endl;
    // cin >> n;

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

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 5; j >= i; j--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    //    *****
    // ****
    // ***
    // **

    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= 5 - row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= row; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    //     *
    //    **
    //   ***
    //  ****
    // *****
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col <= 5 - row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    //     1
    //    12
    //   123
    //  1234
    // 12345
    // char charr = 97;

    for (int row = 1; row <= 5; row++)
    {
        for (int col = 1; col <= 2*(5 - row)-1; col++)
        {
            cout << " ";
            
        }
        for (int k = 1;  k <= row; k++)
        {
            cout<<"*";
            // cout << charr; 
            // charr++;
        }

        cout << endl;
    }

    //     *
    //    **
    //   ***
    //  ****
    // *****

    return 0;
}