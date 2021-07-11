//https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1
void inorder(Node *root,vector<Node*>&ans){
        if(root==NULL)return;
        inorder(root->left,ans);
        ans.push_back(root);
        inorder(root->right,ans);
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        //Your code here
        vector<Node*>in;
        inorder(root,in);
        for(int i=0;i<in.size();i++){
            if(in[i]==x &&i!=in.size()-1)
                return in[i+1];
        }
        Node *temp=new Node(-1);
        return temp;
    }
