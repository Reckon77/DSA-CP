 Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,int>m1;
     Node*p=head->next,*q=head;
     m1[head->data]++;
     while(p){
         if(m1.find(p->data)==m1.end()){
             q=p;
             m1[p->data]++;
             p=p->next;
         }else{
             q->next=p->next;
             delete p;
             p=q->next;
         }
     }
     return head;
    }
