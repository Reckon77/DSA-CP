//https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1/
int height(Node *n,bool &ans){
    if(n==NULL){
        return 0;
    }
    int lh=height(n->left,ans);
    int rh=height(n->right,ans);
    if(abs(lh-rh)>1){
        ans=false;
    }
    return max(lh,rh)+1;
}
bool isBalanced(Node *root)
{
    //  Your Code here
    bool ans=true;
    height(root,ans);
    return ans;
}
