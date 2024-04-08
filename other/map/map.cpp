#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"This is the practice of map"<<endl;

    map<int, int> mp;

    mp[1] = 1;
    mp[2] = 4;
    mp[3] = 9;
    mp[4] = 16;

// for(auto i:mp)
// {
//     cout<<i.second;
// }

    map<int,int> :: iterator it ;
     it = mp.begin();

    cout<< it->first;


    return 0;
}