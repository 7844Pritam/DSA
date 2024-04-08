#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"this is the practice of unordered set"<<endl;

    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);
    us.insert(6);
    us.insert(7);

    for(auto i : us)
    {
        cout<<i<<endl;
    }
return 0;
}