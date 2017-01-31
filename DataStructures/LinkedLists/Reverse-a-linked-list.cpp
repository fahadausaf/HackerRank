Node* Reverse(Node *head)
{
  Node* current = head;
  Node *prev, *next = NULL;

  while(current != NULL){
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  head = prev;
  return head;
}
