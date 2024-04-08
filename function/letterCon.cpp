#include <iostream>
using namespace std;

char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

int main()
{
    char namee;
    cout << "Enter a Small letter to convert in capital:" ;
    cin>>namee;
    char a = convert(namee);
    cout<<a;
    return 0;
}