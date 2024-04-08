#include <iostream>
using namespace std;

void isPrime(int a)
{

    int flag=0;
    for (int i = 2; i < a; i++)
    {
        // if (a < 2)
        // {
        //     cout << "Not Prime";
        //     return 0;
        // }

        if (a % i == 0)
        {
            flag=1;
            cout << "Not Prime"<<endl;
            break;
            
        }
        
        // else
        // {
        //     cout << "Wrong";
        // }
    }
    if(flag==0)
       cout << "this is prime"<<endl;
}


int factorial (int fact)
{
    int ans=1;
    for(int i=fact;i>=1;i--)
    {
        ans=ans*i;
    }

    return ans;
}

void swap(int & m, int & n){
    int c;
    // a -4
    // b-5

    c = m;
    m = n;
    n = c;
    // cout<<a<<endl;
    // cout<<b;
  
}
// int Factorial(a)
int main()
{
    // int a,b;
    // cout << "Enter a number to check to prime:";
    // cin >> a;
    //  cout << "Enter b number to check to prime:";
    // cin >> b;
    // isPrime(a);
    // isPrime(b);

    // cout<<factorial(a);
  

    int a=2;
    int b=3;
      swap(a,b);

      cout<<a<<endl;
      cout<<b;


    return 0;
}