//https://practice.geeksforgeeks.org/problems/sum-of-leaf-nodes-in-bst/1/
void sum(Node *root,int &ans){
    if(!root)return;
    if(root->left==NULL&&root->right==NULL){
        ans+=root->data;
        return;
    }
    sum(root->left,ans);
     sum(root->right,ans);
}
int sumOfLeafNodes(Node *r ){
     /*Your code here */
     int ans=0;
     sum(r,ans);
     return ans;
     
}
