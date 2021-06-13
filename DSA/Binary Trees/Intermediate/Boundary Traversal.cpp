 //https://www.youtube.com/watch?v=bzF9Ia1XISQ
 //https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1#
 void left(vector<int>&ans,Node *p){
        if(p==NULL)return;
        if(p->left){
             ans.push_back(p->data);
            left(ans,p->left);
        }else if(p->right){
              ans.push_back(p->data);
            left(ans,p->right);
           
        }
    }
    void leaf(vector<int>&ans,Node*root){
        if(root==NULL)return;
      
        if(root->left){
            leaf(ans,root->left);
        }
          if(root->left==NULL&&root->right==NULL){
            ans.push_back(root->data);
        }
        if(root->right){
            leaf(ans,root->right);
        }
    }
    void right(vector<int>&ans,Node *p){
        if(p==NULL){
            return;
        }
        if(p->right){
            right(ans,p->right);
             ans.push_back(p->data);
        }else if(p->left){
            right(ans,p->left);
             ans.push_back(p->data);
        }
       
    }
    vector <int> printBoundary(Node *root)
    {
        //Your code here
        vector<int>ans;
        Node *p=root;
        ans.push_back(root->data);
        left(ans,p->left);
        leaf(ans,p);
        right(ans,p->right);
         return ans;
    }
