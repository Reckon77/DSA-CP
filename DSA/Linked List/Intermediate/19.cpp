void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node *p=head,*q=head;
    while(q->next!=head&&q->next->next!=head){
        p=p->next;
        q=q->next;
        q=q->next;
    }
    if(q->next==head){
        q->next=p->next;
        *head2_ref=p->next;
        p->next=head;
        *head1_ref=head;
        
    }else {
       q=q->next;
       q->next=p->next;
        *head2_ref=p->next;
        p->next=head;
        *head1_ref=head;
       
    }
    
}
