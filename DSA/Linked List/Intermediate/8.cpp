Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node*p=head->next,*q=head;
 while(p){
     if(p->data!=q->data){
         q=p;
         p=p->next;
     }else{
         q->next=p->next;
         delete p;
         p=q->next;
     }
 }
 return head;
}
