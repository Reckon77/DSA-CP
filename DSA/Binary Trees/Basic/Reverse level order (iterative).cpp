//https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1
vector<int> reverseLevelOrder(Node *root)
{
    // code here
     vector<int>ans;
      queue<Node*>q;
      if(root){
        ans.push_back(root->data);
      q.push(root);
      }
      while(!q.empty()){
          Node *p=q.front();
          q.pop();
          if(p->right){
              ans.push_back(p->right->data);
              q.push(p->right);
          }
          if(p->left){
              ans.push_back(p->left->data);
              q.push(p->left);
          }
      }
      reverse(ans.begin(),ans.end());
      return ans;
}
