  //https://leetcode.com/problems/maximum-depth-of-binary-tree/
  //TC - O(H)
  int maxDepth(TreeNode* root) {
      if(!root)return 0;
        int ld=maxDepth(root->left);
        int rd=maxDepth(root->right);
        return 1+max(ld,rd);
    }
