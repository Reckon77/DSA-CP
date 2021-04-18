int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *p=head;
       int len=0;
       while(p){
           p=p->next;
           len++;
       }
       int pos=len-n;
       if(pos<0){
           return -1;
       }
       p=head;
       for(int i=0;i<pos&&p;i++){
           p=p->next;
       }
       return p->data;
}
