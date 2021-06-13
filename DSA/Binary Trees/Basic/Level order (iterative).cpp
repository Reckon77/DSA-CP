 //https://practice.geeksforgeeks.org/problems/level-order-traversal/1
 vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>ans;
      queue<Node*>q;
      if(node){
        ans.push_back(node->data);
      q.push(node);
      }
      while(!q.empty()){
          Node *p=q.front();
          q.pop();
          if(p->left){
              ans.push_back(p->left->data);
              q.push(p->left);
          }
          if(p->right){
              ans.push_back(p->right->data);
              q.push(p->right);
          }
      }
      return ans;
    }
