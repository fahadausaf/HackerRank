/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  if(position == 0){
    if(head->next == NULL)
      return NULL;
    else{
      head = head->next;
      return head;
    }
  }
  else{
    Node* currentNode = head;
    for(int i=0; i<position-1; i++)
      currentNode = currentNode->next;
    currentNode->next = currentNode->next->next;
    return head;
  }
}
