/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

int GetNode(Node *head,int positionFromTail)
{
  int nodes = 0;
  Node* i = head;
  while(i != NULL){
    i = i->next;
    nodes++;
  }
  nodes -= positionFromTail;
  while(--nodes > 0){
    head = head->next;
  }
  return head->data;
}
