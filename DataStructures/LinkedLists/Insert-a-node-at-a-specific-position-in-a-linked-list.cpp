/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  Node* newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;

  if(position == 0){
    if (head == NULL) {
      return newNode;
    }
    else{
      newNode->next = head;
      return newNode;
    }
  }
  else{
    Node* currentNode = head;
    for(int i=0; i<position-1; i++)
      currentNode = currentNode->next;
    newNode->next = currentNode->next;
    currentNode->next = newNode;
    return head;
  }
}
