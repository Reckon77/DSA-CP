  //https://leetcode.com/problems/binary-tree-postorder-traversal/
  //TC O(N) SC O(2N)
  vector<int> postorderTraversal(TreeNode* root) {
          vector<int>ans;
        if(!root)return ans;
        stack<TreeNode*>s1,s2;
        s1.push(root);
        while(!s1.empty()){
            TreeNode*temp=s1.top();
            s1.pop();
            s2.push(temp);
            if(temp->left){
                s1.push(temp->left);
            }
             if(temp->right){
                s1.push(temp->right);
            }
        }
        while(!s2.empty()){
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
    }
