 //https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/
 void connect(Node *root)
    {
       // Your Code Here
       queue<Node*>q1,q2;
       q1.push(root);
       while(!q1.empty()){
           int n=q1.size();
           while(n--){
               Node *temp=q1.front();
               q1.pop();
               if(q1.empty()){
                   temp->nextRight=NULL;
               }else{
                   temp->nextRight=q1.front();
               }
               if(temp->left){
                   q2.push(temp->left);
               }
               if(temp->right){
                   q2.push(temp->right);
               }
           }
           while(!q2.empty()){
               q1.push(q2.front());
               q2.pop();
           }
       }
    }    
      
