// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int factorial(int n)
{

    int ans = 1;
    for (int i = n; i >= 1; i--)
    {
        ans = ans * i;
    }
    return ans;
}

int noOfzero(long long int n)
{
    int count = 0;

    while (n > 0)
    {
        int rem = n % 10;
        if (rem == 0)
        {
            count += 1;
        }
        else
        {
            return count;
        }
        n = n / 10;
    }
    return count;
}

int main()
{
    long long int a = factorial(8);
    cout << a << endl;
    int b = noOfzero(a);
    cout << b;
    return 0;
}