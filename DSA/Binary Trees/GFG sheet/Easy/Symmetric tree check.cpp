//https://practice.geeksforgeeks.org/problems/symmetric-tree/1/
bool check(Node*left,Node *right){
    if(!left&&!right)return true;
    if(left &&!right)return false;
    if(!left && right)return false;
    return (left->data==right->data)&&check(left->left,right->right)&&check(left->right,right->left);
}
bool isSymmetric(struct Node* root)
{
	// Code here
	if(root==NULL)return true;
	bool ans=false;
	if(root->left&&root->right){
	    ans=check(root->left,root->right);
	}else if(root->left==NULL&&root->right==NULL){
	    ans=true;
	}
	
	return ans;
}
