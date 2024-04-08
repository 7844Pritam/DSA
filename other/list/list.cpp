#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    list<int> l1;
    list<int> l2;

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    // for(auto i:l1)
    // {
    //     cout<<i;
    // }

    // making iterator
    
    list<int> :: iterator iter;
    iter = l1.begin();
    cout<< *iter<<endl;
    iter++;
    cout<< *iter;



    return 0;
}