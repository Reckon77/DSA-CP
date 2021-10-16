//https://leetcode.com/problems/binary-tree-preorder-traversal/
//TC- O(N) SC - O(N)
void generate(vector<int>&ans,TreeNode*root){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        generate(ans,root->left);
        generate(ans,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        generate(ans,root);
        return ans;
    }
