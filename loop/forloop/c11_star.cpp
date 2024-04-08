#include <iostream>
using namespace std;
int main()
{

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "*";
    // }

    // cout << endl;

    // for (int j = 0; j < 5; j++)
    // {
    //     cout << "*";
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << "1";
    //     }
    //     cout << endl;
    // }

    // int k = 1;
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << k;
    //     }
    //     cout << endl;
    //     k = k + 1;
    // }

    // int k = 1;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    //  for (int i = 0; i < 5; i++)
    //     {
    //         for (int j = 5; j >= 1; j--)
    //         {
    //             cout << j;
    //         }
    //         cout << endl;
    //     }

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << 6-j;
    //     }
    //     cout << endl;
    // }

    //   question 1
    //    print
    //    54321
    //    54321
    //    54321
    //    54321
    //    54321

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << j * j << " ";
    //     }
    //     cout << endl;
    // }

    //   question 2
    //    print
    //   1 4 9 16 25
    //   1 4 9 16 25
    //   1 4 9 16 25
    //   1 4 9 16 25
    //   1 4 9 16 25

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << j * j * j << " ";
    //     }
    //     cout << endl;
    // }

    //   question 3
    //    print
    //  1 8 27 64 125
    //  1 8 27 64 125
    //  1 8 27 64 125
    //  1 8 27 64 125

    // int k = 0;
    // for (int i = 0; i < 25; i++)
    // {
    //     if (k % 5 == 0)
    //     {
    //         cout << endl;
    //     }
    //     cout << k << " ";
    //     k = k + 1;
    // }

    // int k = 1;

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << k << " ";
    //         k = k + 1;
    //     }
    //     cout << endl;
    // }

    //   question 3
    //    print
    //    1 2 3 4 5
    //    6 7 8 9 10
    //    11 12 13 14 15
    //    16 17 18 19 20
    //    21 22 23 24 25

    // char l = 97;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 1; j <= 5; j++)
    //     {
    //         cout << l << " ";
    //     }
    //     l = l + 1;
    //     cout << endl;
    // }

    //   answer
    //   a a a a a
    //   b b b b b
    //  c c c c c
    //  d d d d d
    //  e e e e e

    // char l = 96;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         l = l + 1;
    //         cout << l << " ";
    //     }
    //     l = 96;

    //     cout << endl;
    // }

    char l = 97;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {       
          char ans=l+i;
          cout<<ans;

        }
        // l = 96;
        cout << endl;
    }
    return 0;
}