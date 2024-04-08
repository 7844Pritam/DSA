#include <iostream>
using namespace std;
int main()
{
  int n, a = 1, b = 1, c;
  cout << "Enter a number as n = ";
  cin >> n;
  cout << a << " ";
  cout << b << " ";
  //    1 1 2 3 5 8
  for (int i = 1; i <= n - 2; i++)
  {
    c = a + b;
    cout << c << " ";

    a = b;
    b = c;
  }

  return 0;
}