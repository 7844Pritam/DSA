#include<bits/stdc++.h>
using namespace std;



class Node {
    public:
    int data;
    Node *next;

    Node(int val)
    {
        data= val;
        next = NULL;
    }
};



void insertAtlast(Node *&head, int value)
{
    Node *p = new Node(value); 

    if(head == NULL)
    {
        cout<<99999999<<endl;
        head = p;
        return;
    }
    
    Node *temp = head;

    cout<<"temp = "<< temp<<endl;  // prinnt the address 
    cout<<"temp = "<< head<<endl;  // nothing printing on terminal

    while(temp->next != NULL)
    {
        cout<<333333<<endl;
        temp = temp->next;
    }
    temp->next = p;
}


void display(Node *head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
}




int main()
{
        // Node *p = new Node(5);
        Node *head = NULL;
        insertAtlast(head, 5);
        insertAtlast(head, 7);
        insertAtlast(head, 9);
        display(head);

    return 0;
}