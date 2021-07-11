//https://practice.geeksforgeeks.org/problems/count-bst-nodes-that-lie-in-a-given-range/1

int getCount(Node *root, int l, int h)
{
  // your code goes here   
  if(root==NULL)return 0;
  if(root->data>=l&&root->data<=h){
      return getCount(root->left,l,h)+getCount(root->right,l,h)+1;
  }else if(root->data<l){
      return getCount(root->right,l,h);
  }else{
      return getCount(root->left,l,h);
  }
}
