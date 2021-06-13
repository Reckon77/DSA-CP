 //https://practice.geeksforgeeks.org/problems/inorder-traversal/1/
 void in(vector<int>&ans,Node *p){
        if(p==NULL)return;
        in(ans,p->left);
        ans.push_back(p->data);
        in(ans,p->right);
        
    }
    vector<int> inOrder(Node* root)
    {
      // Your code here
      Node *p=root;
      vector<int>ans;
      in(ans,p);
      return ans;
    }
