//Spiral form Level order
//https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1#
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int>ans;
    deque<Node *>q;
    if(!root)return ans;
    q.push_back(root);
    bool flag=false;
    while(!q.empty()){
        int n=q.size();
        while(n--){
            if(flag){
                Node *temp=q.front();
                q.pop_front();
                ans.push_back(temp->data);
                if(temp->left){
                    q.push_back(temp->left);
                }
                 if(temp->right){
                    q.push_back(temp->right);
                }
            }else{
                Node *temp=q.back();
                q.pop_back();
                ans.push_back(temp->data);
                if(temp->right){
                    q.push_front(temp->right);
                }
                if(temp->left){
                    q.push_front(temp->left);
                }
            }
        }
        flag=!flag;
        
    }
    return ans;
}
