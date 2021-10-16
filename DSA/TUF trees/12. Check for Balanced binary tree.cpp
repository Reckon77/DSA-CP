 //https://leetcode.com/problems/balanced-binary-tree/
 //TC - O(N^2)
 int maxDepth(TreeNode* root) {
      if(!root)return 0;
        int ld=maxDepth(root->left);
        int rd=maxDepth(root->right);
        return 1+max(ld,rd);
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        if(abs(lh-rh)>1)return false;
        bool lt=isBalanced(root->left);
        bool rt=isBalanced(root->right);
        if(lt && rt)return true;
        return false;
        
    }
    //TC - O(N)
     int maxDepth(TreeNode* root,bool &ans) {
      if(!root)return 0;
        int ld=maxDepth(root->left,ans);
        int rd=maxDepth(root->right,ans);
         if(abs(ld-rd)>1)ans=false;
        return 1+max(ld,rd);
    }
    bool isBalanced(TreeNode* root) {
       bool ans=true;
        maxDepth(root,ans);
        return ans;
        
    }
