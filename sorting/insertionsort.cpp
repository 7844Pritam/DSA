#include<bits/stdc++.h>
using namespace std;

void IS(vector<int> &vec)
{
    int n = vec.size();
    for (int i = 1; i<n; i++)
    {
        int j = i - 1;
        int x = vec[i];
        while (j > -1 && vec[j] > x)
        {
            vec[j + 1] = vec[j];
            j--;
          }
          vec[j + 1] = x;
    }

}


vector<int> printarray(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << ",";
    }
}


int main()
{
    vector<int> vec = {100, 300, 2000, 50000, 400000};
    IS(vec);
    printarray(vec);
    return 0;
}