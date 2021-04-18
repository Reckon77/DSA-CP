struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node*p=head,*q=NULL,*r=NULL;
        while(p){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
        return head;
    }
