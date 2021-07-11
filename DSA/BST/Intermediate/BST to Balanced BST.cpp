//https://www.geeksforgeeks.org/sorted-array-to-balanced-bst/
Node* btree(vector<int>v,int start,int end){
    if(start>end)return NULL;
    int mid=(start+end)/2;
    Node *root=new Node(v[mid]);
    root->left=btree(v,start,mid-1);
    root->right=btree(v,mid+1,end);
    return root;
}
void inorderrr(vector<int> &ino,Node *root){
    if(!root)return;
    inorderrr(ino,root->left);
    ino.push_back(root->data);
    inorderrr(ino,root->right);
}
Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<int>ino;
	inorderrr(ino,root);
	Node *ans=btree(ino,0,ino.size()-1);
	return ans;
}
