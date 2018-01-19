#include <iostream>
#include <queue>
using namespace std;

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
  node *n1 = insert(NULL, 1);
  node *n2 = insert(n1, 2);
  node *n3 = insert(n2, 5);
  node *n4 = insert(n3, 3);
  node *n5 = insert(n4, 6);
  node *n6 = insert(n5, 4);

  return n6;
}

void preOrder(node *root) {
  if(root != NULL){
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
  }
}

void postOrder(node *root) {
  if(root != NULL){
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
  }
}

void inOrder(node *root) {
  if(root != NULL){
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
  }
}

int height(Node* root) {
  if(root == NULL)
    return -1;

  int left = height(root->left) + 1;
  int right = height(root->right) + 1;

  if(left > right)
    return left;
  else
    return right;

  return 0;
}

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

void topView(node *root)
{
  if(root!=NULL){
    leftSkew(root->left);
    cout << root->data << " ";
    rightSkew(root->right);
  }
}

void levelOrder(node * root) {
  if(root != NULL){
    queue <struct node *> q;
    q.push(root);
    while(!q.empty()){
      node *n = q.front();
      q.pop();
      cout << n->data << " ";
      if(n->left != NULL)
        q.push(n->left);
      if(n->right != NULL)
        q.push(n->right);
    }
  }
}
 

int main(){
  node *root = dummyTree();
  cout << "\nPre-Order: ";
  preOrder(root);
  cout << "\nPost-Order: ";
  postOrder(root);
  cout << "\nIn-Order: ";
  inOrder(root);

  return 0;
}
