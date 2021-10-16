//https://leetcode.com/problems/binary-tree-level-order-traversal/
vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>temp;
            while(n--){
                temp.push_back(q.front()->val);
                TreeNode* t=q.front();
                q.pop();
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
                
            }
            ans.push_back(temp);
        }
        return ans;
    }
