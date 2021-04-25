Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node*curr=head,*prev=NULL,*next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        Node*p=head;
            if(p->data==9){
                Node *q=0;
                while(p&&p->data==9){
                    p->data=0;
                    q=p;
                    p=p->next;
                }
                if(p){
                    p->data++;
                }else{
                    Node*t=new Node(1);
                    q->next=t;
                }
            }else{
                p->data++;
            }
        curr=head,prev=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head=prev;
        return head;
    }
