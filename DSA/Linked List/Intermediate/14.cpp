int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
   int len1=0,len2=0;
   Node*p=head1;
   while(p){
       len1++;
       p=p->next;
   }
   p=head2;
   while(p){
       len2++;
       p=p->next;
   }
   Node *biglist,*smalllist;
   int diff;
   if(len1>len2){
       biglist=head1;
        smalllist=head2;
       diff=len1-len2;
   }else{
       biglist=head2;
        smalllist=head1;
       diff=len2-len1;
   }
   p=biglist;
   for(int i=0;i<diff;i++){
       p=p->next;
   }
   Node*q=smalllist;
   int ans=-1;
   while(p&&q){
       if(p==q){
           ans=p->data;
           break;
       }
       p=p->next;
       q=q->next;
   }
   return ans;
}
