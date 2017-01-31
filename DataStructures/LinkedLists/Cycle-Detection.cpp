/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
  if(head==NULL)
    return false;

  Node *p1 = head, *p2 = head;

  while(p1!=NULL || p2!=NULL){
    p1 = p1->next;
    p2 = p2->next->next;

    if(p1==p2)
      return true;
    if(p1==NULL)
      return false;
    if(p2==NULL)
      return false;
  }

  return false;
}
