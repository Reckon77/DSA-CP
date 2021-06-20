//https://practice.geeksforgeeks.org/problems/sum-tree/1
//https://www.youtube.com/watch?v=zqA8FwxXSdU
int f=1;
    int sum(Node *root){
        if(!root)return 0;
        if(root->left==NULL&&root->right==NULL)return root->data;
        if(f==0)return 0;
        int a=sum(root->right);
        int b=sum(root->left);
        if(a+b!=root->data)f=0;
        return a+b+root->data;
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         f=1;
         sum(root);
         return f;
    }
