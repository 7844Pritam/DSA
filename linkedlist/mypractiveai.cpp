#include <iostream>

struct Node {
  int data;
  Node* next;
};

int main() {
  Node* head = new Node();
  head->data = 1;
  head->next = nullptr;

  Node* newNode = new Node();
  newNode->data = 2;
  newNode->next = nullptr;

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
