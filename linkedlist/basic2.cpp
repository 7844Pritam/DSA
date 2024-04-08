#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node *creatLikedlist(vector<int> vec)
{
  Node *head = new Node(vec[0]);
  
  Node *temp;
  temp = head;
  
  int i;
  while (i<vec.size())
  {
    Node *p = new Node(vec[i]);
    temp->next = p;
    temp = p;
  }
    return head;
}

int main()
{
    vector<int> vecc = {1, 2, 3, 4, 5};
    Node *head = creatLikedlist(vecc);

    cout<<head->next->next->data;

    return 0;
}
