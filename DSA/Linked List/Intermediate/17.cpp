int getMiddle(Node *head)
{
   // Your code here
   Node*f=head,*s=head;
   while(f&&f->next){
       s=s->next;
       f=f->next;
       f=f->next;
   }
   return s->data;
}
