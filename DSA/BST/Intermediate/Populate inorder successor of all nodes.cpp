//https://www.youtube.com/watch?v=W25l6evkk_U
//https://practice.geeksforgeeks.org/problems/populate-inorder-successor-for-all-nodes/1
 void set(Node*root,Node*&prev){
        if(root==NULL)return;
        set(root->left,prev);
        if(prev){
            prev->next=root;
        }
        prev=root;
        set(root->right,prev);
    }
    void populateNext(Node *root)
    {
        //code here
        Node *prev=NULL;
        set(root,prev);
    }
