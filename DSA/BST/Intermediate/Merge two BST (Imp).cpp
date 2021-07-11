   //https://practice.geeksforgeeks.org/problems/merge-two-bst-s/1
   void inorder(Node *root,vector<int>&in){
        if(!root)return;
        inorder(root->left,in);
        in.push_back(root->data);
        inorder(root->right,in);
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       //Your code here
       vector<int>in1,in2,ans;
       inorder(root1,in1);
       inorder(root2,in2);
       int i=0,j=0;
       while(i<in1.size()&&j<in2.size()){
           if(in1[i]<in2[j]){
               ans.push_back(in1[i++]);
           }else if(in1[i]>in2[j]){
               ans.push_back(in2[j++]);
           }else{
                ans.push_back(in1[i++]);
                 ans.push_back(in2[j++]);
           }
       }
       while(i<in1.size()){
           ans.push_back(in1[i++]);
       }
        while(j<in2.size()){
           ans.push_back(in2[j++]);
       }
       return ans;
    }
