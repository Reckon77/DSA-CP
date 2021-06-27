//https://practice.geeksforgeeks.org/problems/print-all-nodes-that-dont-have-sibling/1/
void siblings(vector<int>&ans,Node *root){
    if(!root)return;
    if(root->right==NULL &&root->left){
        ans.push_back(root->left->data);
    }else if(root->left==NULL&&root->right){
        ans.push_back(root->right->data);
    }
    siblings(ans,root->left);
    siblings(ans,root->right);
}
vector<int> noSibling(Node* node)
{
    // code here
    vector<int>ans;
    siblings(ans,node);
    if(ans.size()==0){
        ans.push_back(-1);
        
    }
    sort(ans.begin(),ans.end());
    return ans;
}
