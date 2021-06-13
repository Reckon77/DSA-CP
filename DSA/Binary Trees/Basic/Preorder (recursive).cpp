//https://practice.geeksforgeeks.org/problems/preorder-traversal/1/
void pre(vector<int>&ans,Node *p){
    if(p==NULL)return;
    ans.push_back(p->data);
    pre(ans,p->left);
    pre(ans,p->right);
    
}
vector <int> preorder(Node* root)
{
  // Your code here
  Node *p=root;
  vector<int>ans;
  pre(ans,p);
  return ans;
  
}
