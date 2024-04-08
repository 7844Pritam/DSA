#include <iostream>
using namespace std;

int func(int n)
{
    // cout << "Outside and above of the Base condition." << endl;
    if (n > 0)
    {
        cout << "Calling phase." << endl;
        // cout << n << endl;

        func(n - 1);

        return 0;
        // worked   code running one time below of the calling function?

        // break;
        // not working error: continue statement not within a loop?

        // continue;
        // not woriking  error: continue statement not within a loop?

        cout << n << endl;
        cout << "Returning phase." << endl;
    }
    // cout << "Outside and below of the Base condition." << endl;
}

int main()
{

    int n = 3;
    func(n);
    return 0;
}