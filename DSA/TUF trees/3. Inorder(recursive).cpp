 //https://leetcode.com/problems/binary-tree-inorder-traversal/
 //TC- O(N) SC - O(N)
 void generate(vector<int>&ans,TreeNode*root){
        if(root==NULL){
            return;
        }
        
        generate(ans,root->left);
        ans.push_back(root->val);
        generate(ans,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int>ans;
        generate(ans,root);
        return ans;
    }
