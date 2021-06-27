//https://practice.geeksforgeeks.org/problems/min-distance-between-two-given-nodes-of-a-binary-tree/1
//https://www.youtube.com/watch?v=6DraIPN_0no
Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
        if(!root)return NULL;
        if(root->data==n1||root->data==n2)return root;
        Node *lst=lca(root->left,n1,n2);
        Node *rst=lca(root->right,n1,n2);
        if(lst&&rst)return root;
        if(!lst&&!rst)return NULL;
        return lst?lst:rst;
        
    }
 void find(Node *node,int val,int d,int &x){
     if(!node)return;
     if(node->data==val){
         x=d;
         return;
     }
     find(node->left,val,d+1,x);
     find(node->right,val,d+1,x);
     
 }
int findDist(Node* root, int a, int b) {
    // Your code here
   Node *common=lca(root,a,b);
   int x=0,y=0;
   find(common,a,0,x);
   find(common,b,0,y);
   return x+y;
}
