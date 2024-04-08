#include<bits/stdc++.h>
using namespace std;


void display(vector<int>&a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}

void merge(int l, int mid, int h, vector<int>&a)
{
    int i = l;
    int j = mid + 1;
    int k = 0;
    vector<int> c(h - l + 1);

    while(i<=mid && j<=h)
    {
        if(a[i]<a[j])
        {
            c[k++] = a[i++];
        }
        else{
            c[k++] = a[j++];
        }
    }
    
       for (; i <=mid; i++)
        {
            c[k++]=a[i];
        }

        for (; j <= h; j++){
            c[k++]=a[j];
        }

    for(int i = l; i <= h; i++) {
       a[i] = c[i - l];
    }
}


void mergesort(int l, int h, vector<int>&a)
{
  
    if(l<h)
    {
        int mid = l + (h - l) / 2;
        mergesort(l, mid, a);
        mergesort(mid+1, h, a);
        merge(l,mid,h, a);
    }
}

int main()
{
    cout << "practicing of merge sort"<<endl;
    vector<int> a = {6,5,4,3,2,1};
    int l = 0;
    int h = a.size() - 1;
    mergesort(l,h,a);
    display(a);
   
    return 0;
}