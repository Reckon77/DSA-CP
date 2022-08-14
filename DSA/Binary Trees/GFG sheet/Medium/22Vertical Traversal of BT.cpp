 //https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1/
 vector<int> verticalOrder(Node *root)
    {
        //Your code here
        queue<pair<Node*,int>>q;
        map<int,vector<int>>m1;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*,int>p=q.front();
            q.pop();
            m1[p.second].push_back(p.first->data);
            if((p.first)->left){
               q.push(make_pair((p.first)->left,p.second-1));
           }
           if((p.first)->right){
               q.push(make_pair((p.first)->right,p.second+1));
           }
        }
        vector<int>ans;
        for(auto &a:m1){
            for(auto &b:a.second){
                ans.push_back(b);
            }
        }
        return ans;
    }
