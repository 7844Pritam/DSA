#include <iostream>
using namespace std;

int findPosition(int a, int b)
{

    int p = min(8 - a, 8 - b);
    int q = min(8 - a, b - 1);
    int r = min(a - 1, 8 - b);
    int s = min(a - 1, b - 1);

    int total = p + q + r + s;
}
// social network
int main()
{
    int h, g;
    cout << "Enter cordinates of bishop: as h,g:"<<endl;
    cin >> h;
    cin >> g;
    int t = findPosition(h, g);
    cout << "Bishop No of Steps:" << t;
}