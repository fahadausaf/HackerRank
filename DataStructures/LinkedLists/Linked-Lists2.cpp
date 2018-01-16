#include <iostream>
using namespace std;

struct Node{
  int data;
  struct Node *next;
};

Node* createLinkedList(){
  Node *head = new Node;
  head->data = 0;
  head->next = NULL;

  for(int i=1; i<10; i++){
    Node *n = new Node;
    n->data = i*5-i*2;
    n->next = head;
    head = n;
  }

  return head;
}

void Print(Node *head){
  while(head != NULL){
    cout << head->data << endl;
    head = head->next;
  }
}

int main(){
  Node *n = createLinkedList();
  Print(n);
  return 0;
}
