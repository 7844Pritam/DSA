#include<bits/stdc++.h>
using namespace std;

void BS(vector<int> &a)
{
    int n = a.size();
    int flag = 0;
    for(int i=0; i<n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
           if(a[j] > a[j+1])
           {
               swap(a[j], a[j + 1]);
               flag = 1;
           }
        }

        if(flag==0)
        {
            break;
        }
       
    }
}

int main()
{

    vector<int> d = {5000, 45, 1233, 2121, 0001};
    BS(d);

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << ",";
    }
        return 0;
}