//https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1/
//https://www.geeksforgeeks.org/inorder-predecessor-successor-given-key-bst/
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
    if(root==NULL)return;
    if(root->key==key){
        if(root->left){
            Node *p=root->left;
            while(p->right){
                p=p->right;
            }
            pre=p;
        }
        if(root->right){
             Node *p=root->right;
            while(p->left){
                p=p->left;
            }
            suc=p;
        }
        return;
    }
    if(key<root->key){
        suc=root;
        findPreSuc(root->left,pre,suc,key);
    }else{
        pre=root;
        findPreSuc(root->right,pre,suc,key);
    }

}
