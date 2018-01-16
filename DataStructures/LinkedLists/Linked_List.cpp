#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node *next;
};

Node* InsertNth(Node* head, int data, int position){

}

Node* InsertHead(Node* head, int data){
  Node* n = new Node;
  n->data = data;
  n->next = NULL;

  if(head==NULL)
    return n;

  n->next = head;
  return n;
}

Node* InsertTail(Node *head,int data)
{
  Node* n = new Node;
  n->data = data;
  n->next = NULL;

  if(head==NULL)
    return n;

  Node* current = head;
  while(current->next != NULL){
    current = current->next;
  }
  current->next = n;
  return head;
}

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
  //Print(InsertTail(CreateLinkedList(),55));
  //Print(InsertHead(CreateLinkedList(),55));
}
