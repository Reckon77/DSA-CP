 //https://www.youtube.com/watch?v=XpeA8w44xeo
 //https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1
 int sum(Node *root){
        if(!root)return 0;
      
        int lst=sum(root->left);
        int rst=sum(root->right);
          int x=root->data;
        root->data=lst+rst;
        return lst+rst+x;
    }
    void toSumTree(Node *node)
    {
        // Your code here
      sum(node);
    }
