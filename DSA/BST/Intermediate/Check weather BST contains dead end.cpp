//https://practice.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1#
//https://www.geeksforgeeks.org/simple-recursive-solution-check-whether-bst-contains-dead-end/
bool check(Node*root,int min,int max){
    if(!root)return false;
    if(max-min<=1 || (max-min==2&&root->data!=max&&root->data!=min))return true;
    bool lst=check(root->left,min,root->data);
    bool rst=check(root->right,root->data,max);
    return lst||rst;
}
bool isDeadEnd(Node *root)
{
    //Your code here
    return check(root,1,INT_MAX);
    
}
