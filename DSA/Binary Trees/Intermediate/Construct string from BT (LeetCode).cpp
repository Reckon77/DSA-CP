  //https://leetcode.com/problems/construct-string-from-binary-tree/submissions/
  //https://www.geeksforgeeks.org/binary-tree-string-brackets/
  void treetos(TreeNode *root,string &s){
        if(root==NULL){
            return;
        }
        s+=to_string(root->val);
          if(!root->left&&!root->right){
             return;
             }
        s.push_back('(');
        treetos(root->left,s);
          s.push_back(')');
        if(root->right){
             s.push_back('(');
        treetos(root->right,s);
          s.push_back(')');
        }
    }
  
    string tree2str(TreeNode* root) {
       string s;
        treetos(root,s);
        return s;
        
    }
