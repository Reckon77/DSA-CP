//Left view
//https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1
//https://www.geeksforgeeks.org/print-left-view-binary-tree/
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   queue<Node*>q;
    if(!root)return ans;
   q.push(root);
   while(!q.empty()){
      int n=q.size();
        for(int i=1;i<=n;i++){
            Node *p=q.front();
            q.pop();
            if(i==1){
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
