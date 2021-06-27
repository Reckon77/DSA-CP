//https://practice.geeksforgeeks.org/problems/k-distance-from-root/1/
void findans(vector<int>&ans,Node *root,int cnt,int k){
    if(!root)return;
    if(cnt==k){
        ans.push_back(root->data);
        return;
    }
    findans(ans,root->left,cnt+1,k);
    findans(ans,root->right,cnt+1,k);
}
vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int>ans;
  findans(ans,root,0,k);
  return ans;
}
