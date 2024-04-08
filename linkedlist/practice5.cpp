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

Node *createLinkedlist(vector<int> vec)
{
    Node *head = new Node(vec[0]);
    Node *temp;
    temp = head;

    int i = 0;
    while (i<vec.size())
    {
        Node *p = new Node(vec[i]);
        temp->next = p;
        temp = p;
        i++;
    }
    return head;
}

int main()
{
    vector<int> mainvec = {1, 2, 3, 4, 5, 6};
    Node *head1 = createLinkedlist(mainvec);
    cout << head1->data;

    return 0;
}