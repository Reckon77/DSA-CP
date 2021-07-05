 //https://www.youtube.com/watch?v=maiOCptc3D8
 //https://practice.geeksforgeeks.org/problems/check-for-bst/1/
 bool isbstutil(Node *root,int min,int max){
       if(!root)return true;
       if(root->data<=min||root->data>=max){
           return false;
       }
       return isbstutil(root->left,min,root->data)&&isbstutil(root->right,root->data,max);
    }
    bool isBST(Node* root) 
    {
        // Your code here
        return isbstutil(root,INT_MIN,INT_MAX);
      
    }
