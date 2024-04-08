#include<bits/stdc++.h>
using namespace std; 

int main()
{
     cout<<"hello ordered set practice"<<endl;

     set<int> s;
     s.insert(1);
     s.insert(2);
     s.insert(2);
     s.insert(4);
     s.insert(5);

     for(auto i:s)
     {
        cout<<i<<"";
        cout<<"\n";
     }
    return 0;
}