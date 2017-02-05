#include <iostream>
#include <queue>
using namespace std;

struct node
{
  node* left;
  node* right;
  int data;
};

int height(node* root){
  if(root==NULL)
    return -1;

  int left = height(root->left) + 1;
  int right = height(root->right) + 1;

  if(left > right)
    return left;
  else
    return right;

  return 0;
}

void inOrder(node *root) {
  if(root!=NULL){
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
  }
}

node* generateTree(){
  int n;
  cin >> n;
  queue <struct node *> q;
  node *root = new node;
  root->data = 1;
  root->left = NULL;
  root->right = NULL;
  q.push(root);
  node* curr = new node;
  while(!q.empty()){
    curr = q.front();
    q.pop();

    node *left = new node;
    left->left = NULL;
    left->right = NULL;
    node *right = new node;
    right->left = NULL;
    right->right = NULL;

    cin >> left->data;
    cin >> right->data;

    if(left->data==-1)
      curr->left = NULL;
    else{
      curr->left = left;
      q.push(left);
    }

    if(right->data==-1)
      curr->right = NULL;
    else{
      curr->right = right;
      q.push(right);
    }
  }
  return root;
}

node* swapNodes(node* root, int level){
  if(root==NULL || level ==0)
    return root;

  if(level==1){
    node* temp = root->left;
    root->left = root->right;
    root->right = temp;
  }
  else{
    root->left = swapNodes(root->left, level-1);
    root->right = swapNodes(root->right, level-1);
  }

  return root;
}

int main(){
  node* tree = generateTree();
  int n;
  cin >> n;
  int swaps[n];

  for(int i=0;i<n;i++){
    cin >> swaps[i];
  }

  int h = height(tree) + 1;

  for(int i=0; i<n; i++){
    node* newTree = tree;
    for(int j=1; j*swaps[i]<h+1; j++){
      newTree = swapNodes(newTree,j*swaps[i]);
    }
    inOrder(newTree);
    cout << endl;
  }


  return 0;
}
