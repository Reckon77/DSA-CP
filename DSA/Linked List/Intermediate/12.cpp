struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        Node *curr=first,*prev=NULL,*next;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        first=prev;
        curr=second,prev=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        second=prev;
        int carry=0;
        Node *head=NULL,*t,*p=first,*q=second;
        while(p||q){
            int sum=0;
            if(p&&q){
                if(head==NULL){
                    sum=p->data+q->data+carry;
                    if(sum>9){
                        carry=1;
                        t=new Node(sum%10);
                        t->next=NULL;
                        head=t;
                        t=NULL;
                    }else{
                        carry=0;
                        t=new Node(sum);
                        t->next=NULL;
                        head=t;
                        t=NULL;
                    }
                }else{
                    sum=p->data+q->data+carry;
                    if(sum>9){
                        carry=1;
                        t=new Node(sum%10);
                        t->next=head;
                        head=t;
                        t=NULL;
                    }else{
                        carry=0;
                        t=new Node(sum);
                        t->next=head;
                        head=t;
                        t=NULL;
                    }
                }
                p=p->next;
                q=q->next;
            }else if(p&&!q){
                sum=p->data+carry;
               if(head==NULL){
                    if(sum>9){
                        carry=1;
                        t=new Node(sum%10);
                        t->next=NULL;
                        head=t;
                        t=NULL;
                    }else{
                        carry=0;
                        t=new Node(sum);
                        t->next=NULL;
                        head=t;
                        t=NULL;
                    }
                }else{
                    if(sum>9){
                        carry=1;
                        t=new Node(sum%10);
                        t->next=head;
                        head=t;
                        t=NULL;
                    }else{
                        carry=0;
                        t=new Node(sum);
                        t->next=head;
                        head=t;
                        t=NULL;
                    }
                }
                p=p->next;
            }else{
                 sum=q->data+carry;
               if(head==NULL){
                    if(sum>9){
                         carry=1;
                        t=new Node(sum%10);
                        t->next=NULL;
                        head=t;
                        t=NULL;
                    }else{
                        carry=0;
                        t=new Node(sum);
                        t->next=NULL;
                        head=t;
                        t=NULL;
                    }
                }else{
                    if(sum>9){
                        carry=1;
                        t=new Node(sum%10);
                        t->next=head;
                        head=t;
                        t=NULL;
                    }else{
                        carry=0;
                        t=new Node(sum);
                        t->next=head;
                        head=t;
                        t=NULL;
                    }
                }
                q=q->next;
            }
        }
        if(carry!=0){
            t=new Node(1);
            t->next=head;
            head=t;
        }
        return head;
    }
