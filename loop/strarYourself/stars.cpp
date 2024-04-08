#include <iostream>
using namespace std;
int main()
{

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         if (j <= i)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // *
    // **
    // ***
    // ****
    // *****

    // second way to find this structure

    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << "*";
    //     }

    //     for (int j = 5-i; j <= 5; j++)
    //     {
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    // *
    // **
    // ***
    // ****
    // *****
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <= i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = i; j <= 5; j++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // *****
    //  ****
    //   ***
    //    **
    //     *

    // for (int i = 5; i >= 1; i--)
    // {
    //     for (int spa = 1; spa <= 5 - i; spa++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= 2 * i - 1; k++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    int n = 4;
    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int spa = 1; spa <= 2 * n - 2 * i; spa++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 2; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int spa = 1; spa <= 2 * n - 2 * i; spa++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    
    // ********
    // ***  ***
    // **    **
    // *      *
    // **    **
    // ***  ***
    // ********

    // int n = 15;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int spa = 1; spa <= n - i; spa++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= 2 * i - 1; k++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    // for (int i = n; i >= 1; i--)
    // {
    //     for (int spa = 1; spa <= n - i; spa++)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= 2 * i - 1; k++)
    //     {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }
    return 0;
}
