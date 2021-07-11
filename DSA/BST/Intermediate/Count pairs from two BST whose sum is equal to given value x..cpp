//https://practice.geeksforgeeks.org/problems/brothers-from-different-root/1#

void inorder(vector<int>&ans,Node*root){
    if(!root)return;
    inorder(ans,root->left);
    ans.push_back(root->data);
    inorder(ans,root->right);
}
int countPairs(Node* root1, Node* root2, int x)
{
    // Code here
    vector<int>in1,in2;
    inorder(in1,root1);
    inorder(in2,root2);
    int i=0,j=in2.size()-1,ans=0;
    while(i<in1.size()&&j>=0){
       if(in1[i]+in2[j]>x){
            j--;
        }else if(in1[i]+in2[j]<x) {
            i++;
        }else{
             ans++;
            i++;
            j--;
        }
    }
    return ans;
}
