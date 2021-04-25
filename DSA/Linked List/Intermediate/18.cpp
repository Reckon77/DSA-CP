bool isCircular(Node *head)
{
   // Your code here
   Node *p=head;
   do{
       p=p->next;
   }while(p&&p!=head);
   if(p==head)
        return true;
    return false;
}

