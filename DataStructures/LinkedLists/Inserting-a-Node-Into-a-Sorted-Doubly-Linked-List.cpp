/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node* SortedInsert(Node *head,int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        return head;
    }
    else if(data < head->data)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return head;
    }
    else
    {
        Node *current = head;
        Node *temp = new Node;
        while(current->next != NULL)
        {
            if(data < (current->next)->data)
            {
                temp = current->next;
                current->next = newNode;
                newNode->prev = current;
                newNode->next = temp;
                (newNode->next)->prev = newNode;
                return head;
            }
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
        return head;
    }
}
