/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void leftSkew(node *root){
  if(root!=NULL){
    leftSkew(root->left);
    cout << root->data << " ";
  }
}

void rightSkew(node *root){
  if(root!=NULL){
    cout << root->data << " ";
    rightSkew(root->right);
  }
}

void top_view(node *root)
{
  if(root!=NULL){
    leftSkew(root->left);
    cout << root->data << " ";
    rightSkew(root->right);
  }
}
