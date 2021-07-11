//https://practice.geeksforgeeks.org/problems/reverse-level-order-traversal/1
vector<int> reverseLevelOrder(Node *root)
{
    // code here
     vector<int>ans;
      queue<Node*>q;
      if(root){
      q.push(root);
      }
      while(!q.empty()){
          Node *p=q.front();
          ans.push_back(p->data);
          q.pop();
          if(p->right){
              q.push(p->right);
          }
          if(p->left){
              q.push(p->left);
          }
      }
      reverse(ans.begin(),ans.end());
      return ans;
}
