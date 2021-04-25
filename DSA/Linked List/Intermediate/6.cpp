int countNodesinLoop(struct Node *head)
{
    // Code here
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
        if(p==NULL||q==NULL){
            return 0;
        }else{
            Node *t=p;
            int cnt=1;
            do{
                cnt++;
                p=p->next;
                
            }while(p!=t);
            return cnt-1;
        }
        
    
}
