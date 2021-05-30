 //https://practice.geeksforgeeks.org/problems/intersection-of-two-linked-list/1/
 //My soln gives wrong ans because of the order
 Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_map<int,int>m1;
        Node*p=head1;
        while(p){
            m1[p->data]=1;
            p=p->next;
        }
        p=head2;
        Node*head3=NULL,*q=NULL;
        while(p){
            if(m1[p->data]==1){
              if(!q){
                  Node*temp=new Node(p->data);
                  head3=temp;
                  q=temp;
              }else{
                  Node*temp=new Node(p->data);
                  q->next=temp;
                  q=temp;
              } 
            }
            p=p->next;
        }
        return head3;
        
    }
