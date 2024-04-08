#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value)
     {
        data = value;
        next =  NULL;
     }
};

int main() {
    Node* head = new Node(1);

    Node* newNode = new Node(2);
    head->next = newNode;

    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }

    // Don't forget to free allocated memory
    delete head;
    delete newNode;

    return 0;
}
