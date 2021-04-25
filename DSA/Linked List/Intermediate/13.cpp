Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node *p=head1,*q=head2;
    Node *head3=NULL,*t,*last=NULL;
    while(p&&q){
        if(p->data==q->data){
            t=new Node(p->data);
            if(head3==NULL){
                head3=t;
                last=head3;
            }else{
               last->next=t; 
               last=t;
            }
            p=p->next;
            q=q->next;
        }else if(p->data>q->data){
            q=q->next;
        }else{
            p=p->next;
        }
    }
    return head3;
}
