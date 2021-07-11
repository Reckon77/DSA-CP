 //https://practice.geeksforgeeks.org/problems/level-order-traversal/1
 vector<int> levelOrder(Node* node)
    {
      //Your code here
       vector<int>ans;
      queue<Node*>q;
      if(node){
      q.push(node);
      }
      while(!q.empty()){
          Node *p=q.front();
          q.pop();
          ans.push_back(p->data);
          if(p->left){
              q.push(p->left);
          }
          if(p->right){
              q.push(p->right);
          }
      }
      return ans;
    }
