#include<bits/stdc++.h>
using namespace std;

class Node {
   public:
     int data;
     Node *next;

    public:

    Node(int data1)
    {
        data=data1;
        next=NULL;
    }
};

Node *createList(vector<int>vec)
{
    Node *head = new Node(vec[0]);
    Node *temp = head;
    
    int i = 0;
    while(i<vec.size())
    {
        
        i++;
    }
}

int main()
{
    vector<int> vec = {1,2,3,4,5,6};
    Node *head = createList(vec);
}