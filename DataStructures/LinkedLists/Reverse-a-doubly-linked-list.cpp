/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head){
  if(head == NULL)
    return NULL;

  while(head != NULL){
    Node* i = head->prev;
    head->prev = head->next;
    head->next = i;
    if(head->prev == NULL)
      return head;

    head = head->prev;
  }
  return head;
}
