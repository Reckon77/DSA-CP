//https://leetcode.com/problems/binary-tree-postorder-traversal/
 void generate(vector<int>&ans,TreeNode*root){
        if(root==NULL){
            return;
        }
        
        generate(ans,root->left);
        generate(ans,root->right);
         ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
          vector<int>ans;
        generate(ans,root);
        return ans;
    }
