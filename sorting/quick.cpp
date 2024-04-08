#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int  partition(int l, int h, vector<int>&a)
{
    int i = l;
    int j = h;
    int pivot = a[l];
    while(i<j)
    {
    do
    {
        i++;

    } while (a[i] <= pivot);
    do
    {
        j--;
    } while (a[j] > pivot);

     if(i<j)
      swap(a[i], a[j]);
    }
    swap(a[j], a[l]);

    return j;
}



void QuickSort( int l, int h, vector<int> &a){
   
   int j=0;
    if(l<h)
    {
        j = partition(l, h, a);
        QuickSort(l, j, a);
        QuickSort(j+1, h, a);
    }
}

int main()
{
    cout << "Practice of quick sort " << endl;
    vector<int> vec = {4, 2, 5, 7, 1};
    int l = 0;
    vec.push_back(INT_MAX);
    int h = vec.size() - 1;
    QuickSort(l, h, vec);
    
    for(int i=0;i<vec.size()-1;i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}