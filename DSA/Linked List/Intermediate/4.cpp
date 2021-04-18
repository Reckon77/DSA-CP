 struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *curr=head,*prev=NULL,*next;
        int cnt=0;
        while(cnt<k&&curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            cnt++;
        }
        if(curr!=NULL){
            head->next=reverse(next,k);
        }
        return prev;
    }
