//https://practice.geeksforgeeks.org/problems/ancestors-in-binary-tree/1/
//https://www.geeksforgeeks.org/print-ancestors-of-a-given-node-in-binary-tree/
bool tar(Node *root,int key,vector<int>&ans){
        if(root==NULL)return false;
        if(root->data==key){
           return true;
        }
       if(tar(root->left,key,ans)||tar(root->right,key,ans)){
           ans.push_back(root->data);
           return true;
       }
       return false;
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
         // Code here
         vector<int>ans;
         tar(root,target,ans);
         return ans;
    }
