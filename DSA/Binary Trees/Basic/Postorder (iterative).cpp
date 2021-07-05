//https://practice.geeksforgeeks.org/problems/postorder-traversal/1
//https://www.youtube.com/watch?v=k21VKEM8OFY
vector <int> postOrder(Node* root)
{
  // Your code here
 stack<Node*>s1,s2;
 s1.push(root);
 while(!s1.empty()){
     Node*temp=s1.top();
     s1.pop();
     s2.push(temp);
     if(temp->left){
         s1.push(temp->left);
     }
     if(temp->right){
         s1.push(temp->right);
     }
 }
 vector<int>ans;
 while(!s2.empty()){
     ans.push_back(s2.top()->data);
     s2.pop();
 }
 return ans;
  
}
