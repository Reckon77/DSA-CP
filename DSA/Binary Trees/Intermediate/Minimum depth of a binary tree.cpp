 int f=0;
    //https://practice.geeksforgeeks.org/problems/minimum-depth-of-a-binary-tree/1/
	void depth(int &minm,int d,Node *root){
        if(root==NULL){
            return;
        }
        if(f==0&&(!root->left&&!root->right)){
            minm=d;
            f=1;
            return;
        }else if(f==1&&(!root->left&&!root->right)){
            minm=min(d,minm);
            return;
        }
        depth(minm,d+1,root->left);
         depth(minm,d+1,root->right);
        
    }
    int minDepth(Node *root) {
        // Your code here
        f=0;
        int minm=INT_MAX;
        depth(minm,1,root);
        return minm;
        
    }
