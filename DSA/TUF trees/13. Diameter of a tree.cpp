 //https://leetcode.com/problems/diameter-of-binary-tree/
 //TC - O(N) SC - O(N)
 int diameter(TreeNode* root,int &maxi){
        if(!root)return 0;
        int lh=diameter(root->left,maxi);
        int rh=diameter(root->right,maxi);
        maxi=max(maxi,lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        diameter(root,d);
        return d;
        
    }
