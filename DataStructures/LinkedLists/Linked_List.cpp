#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node *next;
};

void Print(Node *head)
{
  while(head != NULL){
    cout << head->data << endl;
    head = head->next;
  }
}

Node* CreateLinkedList(){
  // creates a linked list with 10 nodes

  Node* head = new Node;
  head->data = 0;
  head->next = NULL;

  for(int i = 1; i < 10; ++i){
    Node* n = new Node;
    n->data = i*10;
    n->next = head;
    head = n;
  }

  return head;
}

int main(){
  cout << "Linked List" << endl;
  Print(CreateLinkedList());
}
