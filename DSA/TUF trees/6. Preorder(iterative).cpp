  //https://leetcode.com/problems/binary-tree-preorder-traversal/
  //TC O(N) SC O(N)
  vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
       if(root==NULL)return ans;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode*temp=st.top();
            st.pop();
            ans.push_back(temp->val);
           if(temp->right){
               st.push(temp->right);
           }
             if(temp->left){
               st.push(temp->left);
           }
        }
        return ans;
    }
