#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"hello this is the practice of code multiset";

   multiset<int> ms;
   ms.insert(1);
   ms.insert(1);
   ms.insert(1);
   ms.insert(1);
   ms.insert(1);

   for(auto i : ms)
   {
    cout<<i<<" ";
    cout<<"\n";
   }
    return 0;
}