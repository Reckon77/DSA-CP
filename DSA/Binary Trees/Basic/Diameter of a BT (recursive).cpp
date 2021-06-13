//https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1/
//Diameter of a tree
// O(n^2)
//https://www.geeksforgeeks.org/diameter-of-a-binary-tree/
 int height(Node *n){
        if(n==NULL)return 0;
        int lh=height(n->left);
        int rh=height(n->right);
        return max(lh,rh)+1;
    }
    int diameter(Node* root)
    {
    // Your code here
        if(root==NULL)return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        
        int ld=diameter(root->left);
        int rd=diameter(root->right);
        
        return max({lh+rh+1,ld,rd});
    }
    
//O(n)
//https://www.geeksforgeeks.org/diameter-of-a-binary-tree-in-on-a-new-method/
 int height(Node *n,int &ans){
        if(n==NULL)return 0;
        int lh=height(n->left,ans);
        int rh=height(n->right,ans);
        ans=max(ans,lh+rh+1);
        return max(lh,rh)+1;
    }
    int diameter(Node* root)
    {
    // Your code here
        if(!root)return 0;
        int ans=INT_MIN;
        height(root,ans);
        return ans;
    }
