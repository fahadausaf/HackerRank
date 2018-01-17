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

Node* InsertTail(Node *head,int data)
{
  Node *n = new Node;
  n->data = data;
  n->next = NULL;

  if(head==NULL)
    return n;

  Node *c = head;
  while(c->next !=NULL){
    c = c->next;
  }
  c->next = n;

  return head;
}

Node* InsertHead(Node *head,int data)
{
  Node *n = new Node;
  n->data = data;
  n->next = head;

  return n;
}

Node* InsertNth(Node *head, int data, int position)
{
  Node *n = new Node;
  n->data = data;
  if(position==0){
    n->next = head;
    return n;
  }

  Node *cur = head;
  for(int i=1; i<position; i++)
    cur = cur->next;

  n->next = cur->next;
  cur->next = n;

  return head;
}

int main(){
  Node *n = createLinkedList();
  Print(n);
  return 0;
}
