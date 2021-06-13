//https://practice.geeksforgeeks.org/problems/sum-of-binary-tree/1/
long int sumBT(Node* root)
{
    // Code here
    if(root==NULL){
        return 0;
    }
    long int lsum=sumBT(root->left);
    long int rsum=sumBT(root->right);
    return root->key+lsum+rsum;
}
