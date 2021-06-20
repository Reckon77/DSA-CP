//https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1
//https://www.geeksforgeeks.org/construct-a-binary-tree-from-postorder-and-inorder/
int search(int key,int in[],int start,int end){
    for(int i=start;i<=end;i++){
        if(in[i]==key)
            return i;
    }
}
Node *tree(int in[],int post[],int start,int end,int *pi){
    if(start>end){
        return NULL;
    }
    int curr=post[*pi];
    (*pi)--;
    Node *temp=new Node(curr);
    if(start==end){
        return temp;
    }
    int pos=search(curr,in,start,end);
    temp->right=tree(in,post,pos+1,end,pi);
     temp->left=tree(in,post,start,pos-1,pi);
}
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int pIndex = n - 1;
    return tree(in,post,0,n-1,&pIndex);
}
