#include<bits/stdc++.h>
using namespace std;

class CLLNode {
public:
    int data;
    CLLNode *next;
    CLLNode *prev;

    CLLNode(int data1) {
        data = data1;
        next = NULL;
        prev = NULL;
    }
};

CLLNode* CLLCreateList(vector<int> arr) {

    CLLNode* head = new CLLNode(arr[0]);
    CLLNode* tail = head;

    for(int i = 1; i < arr.size(); i++) {
        CLLNode* newNode = new CLLNode(arr[i]);

        tail->next = newNode;
        newNode->prev = tail;
        newNode->next = head;
        head->prev = newNode;

        tail = newNode;
    }

    return head;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    CLLNode *head = CLLCreateList(vec);
    CLLNode *current = head;

    // if(head != NULL) {
    //     do {
    //         cout << current->data << " ";
    //         current = current->next;
    //     } while(current != head);
    // }
//    current = current->next->next->next;
   current = current->prev->prev->prev;
    cout<<current->data;


    return 0;
}
