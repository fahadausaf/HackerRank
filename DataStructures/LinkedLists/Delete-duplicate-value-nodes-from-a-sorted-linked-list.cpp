/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  if(head == NULL)
    return head;

  Node* current = head;

  while(current->next != NULL){
    if(current->data == current->next->data)
      current->next = current->next->next;
    else
      current = current->next;
  }

  return head;
}
