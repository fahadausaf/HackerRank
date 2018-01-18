struct node
{
    int data;
    node* left;
    node* right;
};


node * insert (node *root ,int value)
{
  if(root == NULL){
    node* n = new node;
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
  }

  if(value < root->data)
    root->left = insert(root->left, value);
  if(value > root->data)
    root->right = insert(root->right, value);

  return root;
}

node * dummyTree(){
  node n1 = (NULL, 1);
  node n2 = (n1, 2);
  node n3 = (n2, 5);
  node n4 = (n3, 3);
  node n5 = (n4, 6);
  node n6 = (n5, 4);

  return n6;
}

int main(){
  node *root = dummyTree();

  return 0;
}
