  //https://practice.geeksforgeeks.org/problems/sum-of-the-longest-bloodline-of-a-tree/1#
  int f=0;
    void traverse(Node *root,int &ans,int sum,int &hlvl,int lvl){
        if(root==NULL)return;
        if(root->left==NULL&&root->right==NULL){
            if(f==0){
                sum+=root->data;
                ans=sum;
                f=1;
                hlvl=lvl;
                return;
            }else if(lvl>=hlvl &&f==1){
                sum+=root->data;
                hlvl=max(lvl,hlvl);
                ans=max(sum,ans);
            }
        }
        traverse(root->left,ans,sum+root->data,hlvl,lvl+1);
         traverse(root->right,ans,sum+root->data,hlvl,lvl+1);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        f=0;
        int ans=INT_MIN;
        int hlvl=0;
        traverse(root,ans,0,hlvl,0);
        return ans;
    }
