//https://practice.geeksforgeeks.org/problems/preorder-traversal/1/#
//https://www.geeksforgeeks.org/iterative-preorder-traversal/
vector <int> preorder(Node* root)
{
  // Your code here
 stack<Node *>st;
 st.push(root);
 vector<int>ans;
 while(!st.empty()){
     Node *temp=st.top();
     st.pop();
     ans.push_back(temp->data);
     if(temp->right){
         st.push(temp->right);
     }
     if(temp->left){
         st.push(temp->left);
     }
 }
 return ans;
  
}
