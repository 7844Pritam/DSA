#include<bits/stdc++.h>
using namespace std;

void binarySearch(vector<int>vec, int key)
{

int low = 0;
int high = vec.size()-1;

int mid = 0;

while(low<=high)
{
   mid =  (low + high)/2;
   if(vec[mid] == key) 
   {
      cout<< mid;
      return;
   }
   else if(vec[mid]<key)
   {
    low = mid+1;
   }
   else
   {
    high = mid -1;
   }
}

cout<<"Number not in vector"; 
}

int main()
{
    vector<int> vec = {1,2,3,4,5,6,7};

    binarySearch(vec, 7);
    return 0;
}