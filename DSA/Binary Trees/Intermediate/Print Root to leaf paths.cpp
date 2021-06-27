//https://practice.geeksforgeeks.org/problems/root-to-leaf-paths/1/
void generate(vector<vector<int>>&ans,vector<int>ip,Node*root){
     if(root==NULL){
         return;
     }
     if(root->left==NULL&&root->right==NULL){
         ip.push_back(root->data);
         ans.push_back(ip);
         return;
     }
     ip.push_back(root->data);
     generate(ans,ip,root->left);
      generate(ans,ip,root->right);
 }
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>>ans;
    vector<int>ip;
    generate(ans,ip,root);
    return ans;
}
