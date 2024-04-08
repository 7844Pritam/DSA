#include <iostream>
using namespace std;
int main()
{

    int primeNum;

    cout << "Enter a number to check prime number :";
    cin >> primeNum;

    int i = 1;
    while (i < primeNum - 1)
    {
        if (primeNum < 2)
        {
            cout << "Not Prime";
            return 0;
        }

        else if (primeNum % i == 0)
        {            
            cout << "Prime nahi hai";
            return 0;
        }
        else
        {
            cout << "something you entered wrong";
        }

        i++;
    }
    cout << "prime";

    return 0;
}