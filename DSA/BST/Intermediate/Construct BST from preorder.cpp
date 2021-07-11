 //https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/
 //https://www.youtube.com/watch?v=vFW80O0NzBU
 //https://www.geeksforgeeks.org/construct-bst-from-given-preorder-traversa/
    TreeNode *pretobst(vector<int>pre,int *ind,int key,int size,int min,int max){
        if(*ind>=size){
            return NULL;
        }
        TreeNode *root=NULL;
        if(key>min&&key<max){
            root = new TreeNode(key);
            (*ind)++;
            if(*ind<size){
                root->left=pretobst(pre,ind,pre[*ind],pre.size(),min,key);
            }
             if(*ind<size){
                root->right=pretobst(pre,ind,pre[*ind],pre.size(),key,max);
            }
        }
        return root;
        
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int ind=0;
        TreeNode *root=pretobst(preorder,&ind,preorder[0],preorder.size(),INT_MIN,INT_MAX);
        return root;
    }
