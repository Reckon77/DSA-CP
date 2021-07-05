//https://practice.geeksforgeeks.org/problems/print-bst-elements-in-given-range/1/

void generate(Node *root,vector<int>&ans,int l,int h){
    if(!root)return;
    generate(root->left,ans,l,h);
    if(root->data>=l&&root->data<=h){
        ans.push_back(root->data);
    }
     generate(root->right,ans,l,h);
}
vector<int> printNearNodes(Node *root, int low, int high)
{
  // your code goes here   
  vector<int>ans;
  generate(root,ans,low,high);
  return ans;
}
