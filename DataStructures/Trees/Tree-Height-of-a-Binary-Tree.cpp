/*The tree node has data, left child and right child
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  int height(Node* root){
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
