 //https://practice.geeksforgeeks.org/problems/construct-tree-1/1
 //https://www.youtube.com/watch?v=HJKoNLGRnYk&t=726s
 int ind=0;
    int search(int key,int in[],int start,int end){
        for(int i=start;i<=end;i++){
            if(in[i]==key){
                return i;
            }
        }
    }
    Node* tree(int in[],int pre[],int start,int end){
        if(start>end){
            return NULL;
        }
        int curr=pre[ind++];
        Node *temp=new Node(curr);
        if(start==end){
            return temp;
        }
        int pos=search(curr,in,start,end);
        temp->left=tree(in,pre,start,pos-1);
        temp->right=tree(in,pre,pos+1,end);
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        Node*root=tree(in,pre,0,n-1);
        return root;
        
    }
