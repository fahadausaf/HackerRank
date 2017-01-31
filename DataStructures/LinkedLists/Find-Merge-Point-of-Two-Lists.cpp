/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node *tempA = headA, *tempB = headB;

    while(tempA != NULL){
      while(tempB != NULL){
        if(tempB == tempA)
          return tempA->data;

        tempB = tempB->next;
      }
      tempB = headB;
      tempA = tempA->next;
    }

    return tempA->data;
}
