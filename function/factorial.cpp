#include <iostream>
using namespace std;

int factorial(int a)
{
  int ans = 1;
  for (int i = a; i > 1; i--)
  {
    ans = ans * i;
  }
  return ans;
}



void fibonacci(int n)
{
 int  a = 1;
  int b = 1;
  cout<<a<<" "; 
  cout<<b<<" ";
  int c;

  for (int i = 1; i <= n-2; i++)
  {
    c = a + b;
    
    a = b;
    b = c;
    cout<<c<<" ";
  }
}

int main()
{     

  // int c = factorial(5);
  // cout<<c;

  // int a = 3;
  // int b = 4;
  // swap1way(a, b);

  fibonacci(5);
  return 0;
}