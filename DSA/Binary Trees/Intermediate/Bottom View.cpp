//https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

vector <int> bottomView(Node *root)
{
   // Your Code Here
    map<int,int>m1;
       queue<pair<Node*,int>> q;
       q.push(make_pair(root,0));
       while(!q.empty()){
           pair<Node*,int>p1=q.front();
           q.pop();
            m1[p1.second]=(p1.first)->data;
           if((p1.first)->left){
               q.push(make_pair((p1.first)->left,p1.second-1));
           }
           if((p1.first)->right){
               q.push(make_pair((p1.first)->right,p1.second+1));
           }
       }
       vector<int>ans;
       for(auto &a:m1){
           ans.push_back(a.second);
       }
       return ans;
}

