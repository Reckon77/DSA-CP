//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
int middle(Node*i,Node *j){
    if(j==NULL||j->next==NULL){
        return i->data;
    }
    return middle(i->next,j->next->next);
}
int getMiddle(Node *head)
{
   // Your code here
   Node *i=head,*j=head;
   return middle(i,j);
}
