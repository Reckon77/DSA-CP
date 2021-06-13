 //https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1
 //https://www.geeksforgeeks.org/right-view-binary-tree-using-queue/
 vector<int> rightView(Node *root)
    {
       // Your Code here
        vector<int>ans;
   queue<Node*>q;
    if(!root)return ans;
   q.push(root);
   while(!q.empty()){
      int n=q.size();
        for(int i=1;i<=n;i++){
            Node *p=q.front();
            q.pop();
            if(i==n){
                ans.push_back(p->data);
            }
            if(p->left){
                q.push(p->left);
            }
            if(p->right){
                q.push(p->right);
            }
        }
   }
   return ans;
    }
