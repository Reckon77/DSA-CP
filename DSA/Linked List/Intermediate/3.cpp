 bool isPalindrome(Node *head)
    {
        //Your code here
       Node *p=head,*q=NULL,*r=NULL,*x=NULL;
        int len=0;
        while(p){
        	p=p->next;
	        len++;
        }
        int pos=0;
        if(len%2==0){
	        pos=(len/2)+1;
        }else{
	        pos=(len/2)+2;
        }
        p=head;
        for(int i=0;i<pos-1&&p;i++){
        	x=p;
	        p=p->next;
        }
        while(p){
        	r=q;
        	q=p;
        	p=p->next;
	        q->next=r;
        }
        x->next=q;
        p=head;
        while(q){
            if(p->data!=q->data){
                return false;
            }
            p=p->next;
            q=q->next;
        }
        return true;
    }
