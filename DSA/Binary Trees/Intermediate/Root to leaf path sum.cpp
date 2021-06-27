 //https://practice.geeksforgeeks.org/problems/root-to-leaf-path-sum/1/
 bool ans=false;
    void check(Node *root,int sum,int leafsum){
        if(!root){
            if(sum==leafsum){
                ans=true;
            }
            return;
        }
        if(ans)return;
        check(root->left,sum,leafsum+root->data);
         check(root->right,sum,leafsum+root->data);
    }
    bool hasPathSum(Node *root, int S) {
    // Your code here
    ans=false;
    check(root,S,0);
    return ans;
    
