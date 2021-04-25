bool detectLoop(Node* head)
    {
        // your code here
        Node*p,*q;
        p=q=head;
        do{
            p=p->next;
            q=q->next;
            if(q){
                q=q->next;
            }else{
                q=NULL;
            }
        }while((p&&q)&&p!=q);
        if(p==NULL&&q==NULL){
            return false;
        }
        return p==q;
    }
