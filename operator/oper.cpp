#include <iostream>
#include <string>
using namespace std;

int main()
{
    // cout << 15 / 4 << endl;
    // overlees
    // cout << 1.5 / 4 << endl;
    // cout << 7.0 / 3 << endl;
    // cout << (2 * 3 % 8 / 5) << endl;
    // cout << (4 % 3 * 8 / 5)<<endl;
    // cout << (4 / 3  * 8 % 5);

    // increment and decrement operator

    // int a = 1;
    // int b = ++a;
    // cout << ++a<<endl;

    //    cout<<(5>4>3)<<endl;
    //    cout<<(5>4)<<endl;
    //    cout<<(5<4)<<endl;
    //    cout<<(4<=4)<<endl;

    //    programs on operators

    // int a;
    // int b;
    // int c;
    // cout << "Enter a :";
    // cin >> a;
    // cout << "Enter b :";
    // cin >> b;
    // cout << "Enter c :";
    // cin >> c;
    // if(a>b && b>c)
    // {
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }

    // char ch;
    // cout<<"Enter a letter to check a vowels or consonants :";
    // cin>>ch;
    // if(ch == 'a' && ch == 'e'&& ch == 'i'&& ch == 'o'&& ch == 'u'){
    //     cout<<"You enter a Vowels!";
    // }else{
    //     cout<<"You enter a consonants!";
    // }

    // Bitwise Operator...
    // int a = 20;
    // while (a <= 50)
    // {
    //     cout << a << endl;
    //     a++;
    // }

    // int i = 1;
    // do
    // {
    //     i++;
    //     cout << i << endl;
    // } while (i <= 10);

    // int i = 0;
    // int sum = 0;
    // cout << "Enter as n to add up to add"<<endl;
    // do
    // {
    //     sum = sum + i;
    //     i++;
    // } while (i <= 5);
    // cout << sum;
    // return 0;

    // break and continue

    // for (int i = 0; i < 10; i++)
    // {
    //     if(i==5){
    //         break;
    //     }
    //     cout << i << endl;

    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     if(i==5){

    //         continue;

    //     }
    //     cout << i << endl;

    // }

    // int a = 10;
    // int a = 6;
    // if (true)
    // {
    //     // a = 4;
    //     if (a < 5)
    //     {
    //         cout << "yes";
    //     }
    //     else
    //     {
    //         cout << "No";
    //     }
    // }

    // int a = 3;
    // int b = 6;
    // int c = 4;
    // int d = 3;

    // int ans = 0;
    // ans = ans * 10 + a;
    // ans = ans * 10 + b;
    // ans = ans * 10 + c;
    // ans = ans * 10 + d;
    // cout << ans;

    // int a;
    // int b;

    // cin>>a;
    // cin>>b;

    // int ans = 0;
    // ans = ans * 10 + b;
    // ans = ans * 10 + a;

    // cout<<ans;

    // int a = 321;

    // int r1 = a % 10;
    // int q1 = a / 10;

    // cout << p;

    // int n;
    // cout << "Enter a :" << endl;
    // cin >> n;

    // int i = 0;
    // int a = 1;
    // int b = 1;
    // int c;

    // cout << a << " ";
    // cout << b << " ";
    // do
    // {
    //     c = a + b;
    //     cout << c << " ";

    //     a = b;
    //     b = c;

    //     i++;
    // } while (i < n);

    // int a ;
    // cout<<"enter a number"<<endl;
    // for(int i; i<a; i++){

    // }

    // int n;
    // cout << "Enter n change binary:";
    // cin >> n;

    // int rem;
    // int qutio;

    // int rem2 = 0;
    //     int ans = 0;

    // while (n>0)
    // {

    //     rem2 = n % 10;
    //     ans = ans * 10 + rem2;
    //     n = n / 10;
    // }
    // cout << ans;

    // conveting decimol to binary
    // int n;
    // cout << "Enter n change binary:";
    // cin >> n;

    // string a = "";

    // while (n > 0)
    // {
    //     int rem = n % 2;
    //     n = n / 2;
    //     string k = to_string(rem);
    //     a += k;
    // }

    // for (int i = a.size() - 1; i >= 0; i--)
    // {
    //     cout << a[i];
    // }

    // to check a year that this is leap year or not leap year

    // int n;
    //     // cout << "Enter a
    //      to know it is   leap year or not leap year:";
    //     // cin >> n;
    //     // if (n % 4 == 0)
    //     // {
    //     //     cout << "It is leap year";
    //     // }
    //     // else
    //     // {
    //     //     cout << "It is not a leap year";
    //     // }

    //     return 0;

    int n;
    int rem = 0;
    int ans = 0;
    cout << "Enter your number";
    cin >> n;
    for (int n; 0 < n; n++)
    {
        rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    
        cout << ans;
    

    return 0;
}