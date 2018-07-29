#include <iostream>
#include <string.h>
using namespace std;

struct Node{
  int data;
  struct Node* next;
};

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

Node* SampleData(){
  Node *n = InsertTail(NULL, 1);
  Node *n2 = InsertTail(n, 2);
  n2 = InsertTail(n, 5);
  n2 = InsertTail(n, 6);
}

void Print(Node *head){
  while(head !=NULL){
    cout << head->data << " ";
    head = head->next;
  }
}

Node* InsertHead(Node *head, int data){
  Node *n = new Node;
  n->data = data;
  n->next = head;

  return n;
}

Node* InsertNth(Node* head, int data, int pos){
  Node *n = new Node;
  n->data = data;
  n->next = NULL;

  if(pos == 0){
    if(head != NULL)
      n->next = head;

    return n;
  }

  Node* curr = head;
  for(int i=1; i<pos-1; i++)
    curr = curr->next;

  n->next = curr->next;
  curr->next =n;

  return head;
}

Node* Delete(Node* head, int pos){
  if(pos==0)
    return head->next;

  Node* curr = head;
  for(int i=1; i<pos-1; i++)
    curr = curr->next;

  curr->next = curr->next->next;
  return head;
}

void ReversePrint(Node* head){
  if(head==NULL)
    return;

  ReversePrint(head->next);
  cout << head->data << " ";
}

Node* Reverse(Node* head){
  Node *curr = head;
  Node *prev = NULL;
  Node *next = NULL;

  while(curr !=NULL){
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  head = prev;
  return prev;
}

int CompareLists(Node *headA, Node* headB)
{
  while(headA != NULL){
    if(headA->data != headB->data)
      return 0;

    headA = headA->next;
    headB = headB->next;
  }

  if(headA != headB)
    return 0;

  return 1;
}



int main() {
  Node *n = SampleData();
  Print(n);
  cout << endl;

  Node* n2 = InsertTail(n, 8);
  Print(n2);
  cout << endl;

  //n = InsertHead(n, 10);
  //Print(n);

  //n = InsertNth(n, 23, 3);
  //cout << endl;
  //Print(n);

  //n = Delete(n, 3);
  //Print(n);
  //cout << endl;

  //ReversePrint(n);
  //cout << endl;

  //n = Reverse(n);
  //Print(n);
  //cout << endl;

  cout << CompareLists(n,n) << endl;
  cout << CompareLists(n,n2) << endl;

}
