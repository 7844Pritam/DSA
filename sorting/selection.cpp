#include<bits/stdc++.h>
using namespace std;

void seleciton(vector<float> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
        swap(arr[min], arr[i]);
        }
    }
}

int main()
{
    
    cout << "The practice of selection sort"<<endl;

        vector<float> vec = {-3454, 4000, 5.1, 2.45, 1};
        seleciton(vec);

        for (int i = 0; i < vec.size(); i++)
        {
            cout << vec[i]<<" ";
        }

        return 0;
}