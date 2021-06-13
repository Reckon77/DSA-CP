//https://practice.geeksforgeeks.org/problems/postorder-traversal/1/
void post(vector<int>&ans,Node *p){
    if(p==NULL)return;
    post(ans,p->left);
    post(ans,p->right);
    ans.push_back(p->data);
}
vector <int> postOrder(Node* root)
{
  // Your code here
  Node *p=root;
  vector<int>ans;
  post(ans,p);
  return ans;
  
}
