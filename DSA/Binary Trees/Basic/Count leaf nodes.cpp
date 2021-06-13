//https://practice.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1/
int countLeaves(Node* root)
{
  // Your code here
  if(root==NULL)return 0;
  if(root->left==NULL && root->right==NULL){
      return 1;
  }else{
       return countLeaves(root->left)+countLeaves(root->right);

  }
}
