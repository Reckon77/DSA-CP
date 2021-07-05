//https://practice.geeksforgeeks.org/problems/minimum-element-in-bst/1/
int findmin(Node *root,Node*tail){
    if(!root)return tail->data;
    tail=root;
    return findmin(root->left,tail);
}
int minValue(Node* root)
{
    // Code here
    int ans;
    Node *tail=NULL;
    ans=findmin(root,tail);
    return ans;
}
