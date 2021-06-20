 //https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1
 //https://www.youtube.com/watch?v=WVFk9DwRgpY
 void modify(Node *root,Node *&head,Node *&prev,int &f){
        if(root==NULL)return;
        modify(root->left,head,prev,f);
       if(f==0){
           f=1;
           head=root;
           prev=root;
       }else{
           prev->right=root;
           prev->right->left=prev;
           prev=prev->right;
       }
        modify(root->right,head,prev,f);
        
    }
    Node * bToDLL(Node *root)
    {
        // your code here
        Node *head=NULL,*prev=NULL;
        int f=0;
        modify(root,head,prev,f);
        return head;
    }
