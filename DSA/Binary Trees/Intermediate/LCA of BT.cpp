 //https://practice.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1/
 //https://www.youtube.com/watch?v=13m9ZCB8gjw
 Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
        if(!root)return NULL;
        if(root->data==n1||root->data==n2)return root;
        Node *lst=lca(root->left,n1,n2);
        Node *rst=lca(root->right,n1,n2);
        if(lst&&rst)return root;
        if(!lst&&!rst)return NULL;
        return lst?lst:rst;
        
    }
