#include <iostream>
using namespace std;
int main()
{
    // cout<<"solving leetcode first program";
    int n, m, answer, sum1 = 0, sum2 = 0;
    cout << "Enter a number as n = ";
    cin >> n;  // n=5
    cout << "Enter a number as m = ";
    cin >> m;   // m=10

    for (int i = 1; i <= n; i++)  // 1 -> 5
    {
        if ( i%m == 0)
        {
            sum1 = sum1 + i;
        }else{

            sum2 = sum2 + i;
            
        }
    }

    answer = sum2 - sum1;
    cout<< answer;
    return 0;
}