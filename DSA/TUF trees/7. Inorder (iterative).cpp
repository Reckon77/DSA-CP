//https://leetcode.com/problems/binary-tree-inorder-traversal/
//TC O(N) SC O(N)
vector<int> inorderTraversal(TreeNode* root) {
         vector<int>ans;
        TreeNode*temp=root;
        stack<TreeNode*>st;

       while(true){
           if(temp){
               st.push(temp);
               temp=temp->left;
           }else{
               if(st.empty())break;
               temp=st.top();
               st.pop();
               ans.push_back(temp->val);
               temp=temp->right;
           }
       }
        return ans;
    }
