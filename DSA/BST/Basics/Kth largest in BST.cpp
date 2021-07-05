 //https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1/
 //ALgo 1 space - O(n) extra space
 void inorder(Node*root,vector<int>&in){
        if(root==NULL)return;
        inorder(root->left,in);
        in.push_back(root->data);
         inorder(root->right,in);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int>in;
        inorder(root,in);
        reverse(in.begin(),in.end());
        return in[K-1];
    }
//Algo 2 Reverse level order
//https://www.youtube.com/watch?v=DfIoVCQ2Lvg    
 void revinorder(Node*root,int k,int &ans,int &cnt){
        if(root==NULL)return;
        revinorder(root->right,k,ans,cnt);
        
        if(cnt==k){
            ans=root->data;
            cnt++;
            return;
        }
        else cnt++;
        revinorder(root->left,k,ans,cnt);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int ans=-1;
        int cnt=1;
        revinorder(root,K,ans,cnt);
        return ans;
    }
