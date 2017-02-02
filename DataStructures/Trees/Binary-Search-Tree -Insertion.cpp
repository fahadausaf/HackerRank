/*
Node is defined as

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert (node *root ,int value)
{
  if(root == NULL){
    node *newNode = new node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
  }

  if(root->data < value)
    root->right = insert(root->right, value);
  else
    root->left = insert(root->left, value);

  return root;
}
