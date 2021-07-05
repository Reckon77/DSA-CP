//https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1/
void traverse(Node *root,vector<int>&in){
        if(root==NULL)return;
        in.push_back(root->data);
        traverse(root->left,in);
        traverse(root->right,in);
    }
    void bt2bst(Node*root,vector<int>in,int &ind){
        if(root==NULL)return;
        bt2bst(root->left,in,ind);
        root->data=in[ind];
        ind++;
         bt2bst(root->right,in,ind);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>in;
        traverse(root,in);
        sort(in.begin(),in.end());
        int ind=0;
        bt2bst(root,in,ind);
        return root;
    }
