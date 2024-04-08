#include <iostream>
using namespace std;

void func(int n) 
{
    // int x = 0;
      // Removed static keyword
    if (n > 0)  
    {
        // x++;
       cout<<n;
       func(n - 1);
       func(n - 1);
    //    func(n - 1);
    //    func(n - 1);
    }
    // return 0;
}

int main()
{
    int n = 3;
     func(n);
    return 0;
}
