//https://practice.geeksforgeeks.org/problems/inorder-traversal/1/
vector<int> inOrder(Node* root) {
        // Your code here
        vector<int>ans;
        stack<Node*>st;
        Node*curr=root;
        while(curr!=NULL || !st.empty()){
            if(curr){
                st.push(curr);
                curr=curr->left;
            }else{
               curr=st.top();
                ans.push_back(curr->data);
                st.pop();
                curr=curr->right;
            }
        }
        return ans;
    }
