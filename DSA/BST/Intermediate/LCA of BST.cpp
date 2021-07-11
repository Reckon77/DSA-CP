//https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1
//https://www.youtube.com/watch?v=TIoCCStdiFo
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(root->data>max(n1,n2)){
       return LCA(root->left,n1,n2);
   }else if(root->data<min(n1,n2)){
       return LCA(root->right,n1,n2);
   }else{
       return root;
   }
}
