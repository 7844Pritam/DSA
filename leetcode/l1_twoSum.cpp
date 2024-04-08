#include <iostream>
using namespace std;

int main()
{

    int target = 22;
    int a[4] = {2, 7, 11, 15};

    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (a[i] + a[j] == target & a[i] != a[j])
            {
                cout << i << endl;
                cout << j << endl;
                return 0;
            }
            // cout<<j;
            // cout << "Error Countred!"<< endl;
        }
    }

    return 0;
}