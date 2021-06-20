 //https://practice.geeksforgeeks.org/problems/leaf-at-same-level/1#
 //Algo 1 with extra space
 void check(Node *root,int lvl,vector<int>&ans){
        if(!root)return;
       if(root->left==NULL&&root->right==NULL){
           ans.push_back(lvl);
           return;
       }
       check(root->left,lvl+1,ans);
       check(root->right,lvl+1,ans);
    }
    bool check(Node *root)
    {
        //Your code here
        vector<int>ans;
        check(root,0,ans);
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=ans[i-1])return false;
        }
        return true;
    }
    
//Algo 2 (no extra space)
//https://www.youtube.com/watch?v=eNcS8-Blc3E
 int ans=1;
    void check(Node *root,int lvl,int &first){
        if(!root)return;
      if(ans==0)return;
      if(root->left==NULL and root->right==NULL){
           if(first==-1){
             first=lvl;
             }else if(lvl!=first){
             ans=0;
            return;
      }
      }
     
       check(root->left,lvl+1,first);
       check(root->right,lvl+1,first);
    }
    bool check(Node *root)
    {
        //Your code here
        ans=1;
        int f=-1;
        check(root,0,f);
        return ans;
    }
