#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node *next;
};

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

void ReversePrint(Node *head)
{
  if(head == NULL)
    return;

  ReversePrint(head->next);
  cout << head->data << endl;
}

int CompareLists(Node *headA, Node* headB)
{
  while(headA!=NULL){
    if(headA->data != headB->data)
      return 0;

    headA = headA->next;
    headB = headB->next;
  }

  if(headA!=headB)
    return 0;

  return 1;
}

Node* MergeLists(Node *headA, Node* headB)
{
  if(headA==NULL)
    return headB;
  if(headB==NULL)
    return headA;

  if(headA->data < headB->data){
    headA->next = MergeLists(headA->next, headB);
    return headA;
  }
  else{
    headB->next = MergeLists(headA, headB->next);
    return headB;
  }
}

Node* Delete(Node *head, int position)
{
  if(position==0)
    return head->next;

  Node *cur = head;
  for(int i=1; i<position; i++)
    cur = cur->next;

  cur->next = cur->next->next;

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
