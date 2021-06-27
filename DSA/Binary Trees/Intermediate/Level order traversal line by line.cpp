//https://practice.geeksforgeeks.org/problems/level-order-traversal-line-by-line/1/
vector<vector<int>> levelOrder(Node* node)
{
  //Your code here
  vector<vector<int>>ans;
  queue<Node*>q;
  if(node==NULL)return ans;
  q.push(node);
  while(!q.empty()){
      int n=q.size();
      vector<int>a;
      while(n--){
          Node *temp=q.front();
          q.pop();
          a.push_back(temp->data);
          if(temp->left){
              q.push(temp->left);
          }
          if(temp->right){
              q.push(temp->right);
          }
      }
      ans.push_back(a);
  }
  return ans;
}
